#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eval.h"
#include "alloc.h"
#include "util.h"
#include "debug.h"
#include "error.h"

static entry_p find_symbol(entry_p entry)
{
    entry_p con = local(entry); 
    if(con)
    {
        do
        {
            entry_p nxt; 
            entry_p *tmp; 
            for(tmp = con->symbols;
                tmp && *tmp && *tmp != end(); 
                tmp++)
            {
                if(!strcmp((*tmp)->name, entry->name)) 
                {
                    return *tmp; 
                }
            }
            nxt = global(entry);
            con = con == nxt ? NULL : nxt; 
        }
        while(con);
        error(entry->id, "Undefined variable", 
              entry->name); 
    }
    else
    {
        error(PANIC);
    }
    return new_failure();
}

entry_p resolve(entry_p entry)
{
    if(entry)
    {
        //entry_p ret; 
        switch(entry->type)
        {
            case NUMBER:
            case STRING:
            case CUSTOM:
            case STATUS: 
            case OPTION: 
            case DANGLE:
                return entry; 
            case SYMBOL: 
               // return resolve(entry->expression);
                return entry->resolved ? entry->resolved : new_failure(); 
            case SYMREF: 
                return resolve(find_symbol(entry)); 
               // return ret->resolved ? resolve(ret->resolved) : new_failure(); 
            case CONTXT: 
                return invoke(entry);
            case CUSREF:
            case NATIVE:
                return entry->call ? entry->call(entry) : new_failure(); 
        }
    }
    error(PANIC);
    return new_failure();
}

int num(entry_p entry)
{
    if(entry && 
       entry != end())
    {
        switch(entry->type)
        {
            case CONTXT:
            case STATUS:
            case CUSTOM:
            case OPTION:
                break;
            case DANGLE:
            case NUMBER:
                return entry->id;
            case SYMBOL:
                return num(entry->resolved); 
            case SYMREF:
                return num(find_symbol(entry)); 
            case CUSREF:
            case NATIVE:
                return num(entry->call ? entry->call(entry) : NULL); 
            case STRING:
                return atoi(entry->name);
        }
    }
    error(PANIC);
    return 0; 
}

const char *str(entry_p entry)
{
    if(entry && 
       entry != end())
    {
        switch(entry->type)
        {
            case CONTXT:
            case STATUS:
            case CUSTOM:
            case OPTION:
                break;
            case DANGLE:
                return ""; 
            case STRING:
                return entry->name;
            case SYMBOL:
                return str(entry->resolved); 
            case SYMREF:
                return str(find_symbol(entry)); 
            case CUSREF:
            case NATIVE:
                return str(entry->call ? entry->call(entry) : NULL); 
            case NUMBER:
                free(entry->name); 
                entry->name = malloc(NUMLEN); 
                if(entry->name)
                {
                    snprintf(entry->name, NUMLEN, "%d", entry->id); 
                    return entry->name;
                }
        }
    }
    error(PANIC);
    return ""; 
}

entry_p invoke(entry_p entry)
{
    entry_p ret = new_failure(); 
    if(entry)
    {
        entry_p *vec = entry->children;
        while (*vec && 
               *vec != end() &&
               !runtime_error())
        {
            if((*vec)->type == NATIVE ||
               (*vec)->type == CUSREF)
            {
            //    kill(ret);
                //ret = resolve_native(*vec);
                if((*vec)->call)
                {
//pretty_print(*vec); 
                    ret = (*vec)->call(*vec); 
//HERE; 
                }
            }
            vec++; 
        }
        return ret;
    }
    error(PANIC);
    return ret;
}

void run(entry_p entry)
{
    entry_p status = invoke(entry);
    eval_print(status);
//    kill(status);
//pretty_print(entry); 
    kill(entry);
}

