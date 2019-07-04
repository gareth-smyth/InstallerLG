//----------------------------------------------------------------------------
// exit.c:
//
// Interuption of program execution
//----------------------------------------------------------------------------
// Copyright (C) 2018, Ola Söder. All rights reserved.
// Licensed under the AROS PUBLIC LICENSE (APL) Version 1.1
//----------------------------------------------------------------------------

#include "alloc.h"
#include "error.h"
#include "eval.h"
#include "exit.h"
#include "gui.h"
#include "procedure.h"
#include "resource.h"
#include "util.h"
#include <stdio.h>
#include <string.h>

#ifdef AMIGA
#include <proto/exec.h>
#endif

//----------------------------------------------------------------------------
// (abort <string1> <string2> ...)
//     abandon installation
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//----------------------------------------------------------------------------
entry_p m_abort(entry_p contxt)
{
    // Arguments are optional.
    C_SANE(0, NULL);

    // Concatenate all children.
    char *msg = get_chlstr(contxt, false);

    // Did we manage to concatenate something?
    if(msg)
    {
        // If we could resolve all our children,
        // show the result of the concatenation
        // unless we have an empty string.
        if(*msg && !DID_ERR)
        {
            gui_abort(msg);
        }

        // Free the temporary buffer.
        free(msg);

        // Set abort. Will make invoke() halt.
        error(contxt, -3, ERR_ABORT, __func__);
        R_NUM(0);
    }

    // Out of memory.
    PANIC(contxt);
    R_CUR;
}

//----------------------------------------------------------------------------
// (exit <string> <string> ... (quiet))
//     end installation after displaying strings (if provided)
//
// This causes normal termination of a script.  If strings are
// provided, they are displayed.  The 'done with installation'
// message is then displayed.  The 'onerror' statements are not
// executed.  If (quiet) is specified, the final report display
// is skipped.
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//----------------------------------------------------------------------------
entry_p m_exit(entry_p contxt)
{
    // All we need is a context.
    if(contxt)
    {
        // If we have any children, display them.
        if(contxt->children)
        {
            // Concatenate all children.
            char *msg = get_chlstr(contxt, false);

            if(!msg)
            {
                // Out of memory
                PANIC(contxt);
                R_CUR;
            }

            // If we could resolve all our children,
            // show the result of the concatenation
            // unless we have an empty string.
            if(*msg && !DID_ERR)
            {
                gui_finish(msg);
            }

            // Free the temporary buffer.
            free(msg);
        }

        // Show final message unless 'quiet' is set.
        if(!get_opt(contxt, OPT_QUIET) && !DID_ERR)
        {
            // Get name and location of application.
            const char *app = get_strvar(contxt, "@app-name"),
                       *dst = get_strvar(contxt, "@default-dest");

            // Only display the 'the app can be found here' message
            // if we know the name and location of the application.
            if(*app && *dst)
            {
                snprintf(get_buf(), buf_size(), tr(S_CBFI), tr(S_ICPL),
                         app, dst);

                // Display the full message.
                gui_finish(get_buf());
            }
            else
            {
                // Display the bare minimum.
                gui_finish(tr(S_ICPL));
            }
        }

        // Make invoke() halt.
        HALT;
        R_NUM(0);
    }

    // The parser is broken
    PANIC(contxt);
    R_CUR;
}

//----------------------------------------------------------------------------
// (onerror (<statements>))
//     general error trap
//
// ******************************************************
// In part implemented using m_procedure. This function
// just invokes the @onerror custom procedure inserted
// using (onerror) which is a special case of (procedure)
// ******************************************************
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//----------------------------------------------------------------------------
entry_p m_onerror(entry_p contxt)
{
    // A static reference. We might be out of
    // heap when this is invoked.
    static entry_t ref = { .type = CUSREF,
                           .name = "@onerror" };

    // Zero or more arguments. No options.
    C_SANE(0, NULL);

    // Global context where the user
    // defined procedures are found.
    entry_p con = global(contxt);

    // Make sure that '@onerror' exists. On
    // OOM it might be missing.
    entry_p *err = con->symbols;

    while(*err && *err != end())
    {
        if((*err)->type == CUSTOM &&
           !strcasecmp((*err)->name, ref.name))
        {
            // Reset error code otherwise
            // m_gosub / invoke will halt
            // immediately.
            RESET;

            // Connect reference to the current context.
            ref.parent = contxt;

            // Invoke @onerror by calling m_gosub just
            // like any non-native function call.
            return m_gosub(&ref);
        }

        // Next function.
        err++;
    }

    // @onerror not found. Init is broken.
    R_CUR;
}

//----------------------------------------------------------------------------
// (trap <flags> <statements>)
//     trap errors.  flags: 1-abort, 2-nomem, 3-error, 4-dos, 5-badargs
//
// Refer to Installer.guide 1.19 (29.4.96) 1995-96 by ESCOM AG
//
// Despite what the Installer.guide says, the implementaion of 'trap' in OS
// 3.9 seems like a stub, it doesn't work at all. Let's just leave this one
// empty.
//----------------------------------------------------------------------------
entry_p m_trap(entry_p contxt)
{
    // Two arguments.
    C_SANE(2, NULL);

    // Dummy.
    R_NUM(1);
}

//----------------------------------------------------------------------------
// (reboot)                                                              (V44)
//     reboot the Amiga
//
// Refer to Installer.guide 1.20 (25.10.1999) 1995-99 by Amiga Inc.
//----------------------------------------------------------------------------
entry_p m_reboot(entry_p contxt)
{
    // All we need is a context.
    if(contxt)
    {
        // Don't reboot in pretend mode.
        if(get_numvar(contxt, "@pretend"))
        {
            D_NUM = 0;
        }
        else
        {
            // In test mode, don't reboot.
            #if defined(AMIGA) && !defined(LG_TEST)
            // Hard reset.
            ColdReboot();
            #else
            D_NUM = 1;
            #endif
        }
    }
    else
    {
        // Broken parser.
        PANIC(contxt);
    }

    // No reboot.
    R_CUR;
}
