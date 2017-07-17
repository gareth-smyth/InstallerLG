#include <stdio.h>
#include <string.h>
#include "eval.h"
#include "native.h"
#include "util.h"
#include "error.h"
#include "debug.h"

/*
*/
entry_p m_gosub(entry_p contxt)
{
    entry_p con = global(contxt);  
    if (con && con->children)
    {
        entry_p *cus = con->children; 
        while(*cus && 
              *cus != SENTINEL)
        {
            if((*cus)->type == CUSTOM &&
               !strcmp((*cus)->name, contxt->name))
            {
                entry_p *arg = (*cus)->symbols, 
                        *ina = contxt->children;
                if(arg && ina)
                {
                    while(*arg && *ina)
                    {
                        entry_p old = (*arg)->resolved;
                        (*arg)->resolved = resolve(*ina); 
                        kill(old); 
                        arg++; 
                        ina++;
                    }
                }
                return invoke(*cus); 
            }
            cus++; 
        }
        error(contxt->id, "Undefined function", 
              contxt->name); 
    }
    else
    {
        error(PANIC);
    }
    return new_failure(); 
}

/*
*/
entry_p m_set(entry_p contxt)
{
    entry_p dst = global(contxt);
    if (dst)
    {
        entry_p val = NULL; 
        entry_p *cur = contxt->symbols; 
        while(*cur && *cur != SENTINEL)
        {
            entry_p old = (*cur)->resolved;
            val = (*cur)->expression;
            (*cur)->resolved = resolve(val); 
            (*cur)->resolved->parent = val; 
            val = (*cur)->resolved;
            push(dst, *cur); 
            kill(old);
            cur++; 
        }
        return resolve(val);
    }
    error(PANIC);
    return new_failure(); 
}

/*
*/
entry_p m_if(entry_p contxt)
{
    TRIPLES(c, p1, p2); 
    entry_p p = num(c) ? p1 : p2; 
    if(p->type == CONTXT)
    {
        return invoke(p);
    }
    else if(p->type == NATIVE ||
            p->type == CUSREF)
    {
        if(p->call)
        {
            return p->call(p); 
        }
    }
    error(PANIC);
    return new_failure(); 
}

/*
*/
static entry_p m_whunt(entry_p contxt, int m)
{
    entry_p r = new_number(0); 
    TWINS(c, b); 
    while((m ^ num(c)) && 
          !runtime_error())
    {
        if(b->type == CONTXT)
        {
            kill(r); 
            r = invoke(b);
        }
        else if(b->type == NATIVE ||
                b->type == CUSREF)
        {
            if(b->call)
            {
                kill(r); 
                r = b->call(b); 
            }
            else
            {
                error(PANIC);
            }
        }
    }
    return r; 
}

/*
*/
entry_p m_while(entry_p contxt)
{
    return m_whunt(contxt, 0); 
}

/*
*/
entry_p m_until(entry_p contxt)
{
    return m_whunt(contxt, 1); 
}

/*
`(+ <expr1> <expr2> ...)'
     returns sum of expressions
*/
entry_p m_add (entry_p contxt)
{
    if(contxt && 
       contxt->children)
    {
        int s = 0; 
        entry_p *cur = contxt->children; 
        while(*cur && *cur != SENTINEL)
        {
            s += num(*cur);
            cur++; 
        }
        return new_number(s); 
    }
    else
    {
        error(PANIC);
        return new_failure();
    }
}

/*
`(< <expr1> <expr2>)'
     less than test (returns 0 or 1)
*/
entry_p m_lt(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        ((a->type == STRING && b->type == STRING && strcmp(a->name, b->name) < 0) ||
         (!(a->type == STRING && b->type == STRING) && num(a) < num(b))) ? 1 : 0
    );
}

/*
`(<= <expr1> <expr2>)'
     less than or equal test (returns 0 or 1)
*/
entry_p m_lte(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        ((a->type == STRING && b->type == STRING && strcmp(a->name, b->name) <= 0) ||
         (!(a->type == STRING && b->type == STRING) && num(a) <= num(b))) ? 1 : 0
    );
}

/*
`(< <expr1> <expr2>)'
     greater than test (returns 0 or 1)
*/
entry_p m_gt(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        ((a->type == STRING && b->type == STRING && strcmp(a->name, b->name) > 0) ||
         (!(a->type == STRING && b->type == STRING) && num(a) > num(b))) ? 1 : 0
    );
}

/*
`(<= <expr1> <expr2>)'
     greater than or equal test (returns 0 or 1)
*/
entry_p m_gte(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        ((a->type == STRING && b->type == STRING && strcmp(a->name, b->name) >= 0) ||
         (!(a->type == STRING && b->type == STRING) && num(a) >= num(b))) ? 1 : 0
    );
}

/*
`(= <expr1> <expr2>)'
     equality test (returns 0 or 1)
*/
entry_p m_eq(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        ((a->type == STRING && b->type == STRING && !strcmp(a->name, b->name)) ||
         (!(a->type == STRING && b->type == STRING) && num(a) == num(b))) ? 1 : 0
    );
}

/* 
`(- <expr1> <expr2>)'
     returns `<expr1>' minus `<expr2>'
*/
entry_p m_sub(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
         num(a) - num(b)
    );
}

/*
`(* <expr1> <expr2> ...)'
     returns product of expressions
*/
entry_p m_mul(entry_p contxt)
{
    if(contxt && 
       contxt->children)
    {
        int s = 1; 
        entry_p *cur = contxt->children; 
        while(*cur && *cur != SENTINEL)
        {
            s *= num(*cur);
            cur++; 
        }
        return new_number(s); 
    }
    else
    {
        error(PANIC);
        return new_failure();
    }
}

/* 
`(/ <expr1> <expr2>)'
     returns `<expr1>' divided by `<expr2>'
*/
entry_p m_div(entry_p contxt)
{
    TWINS(a, b); 
    if(num(b))
    {
        return new_number
        (
            num(a) / num(b)
        );
    }
    else
    {
        error(contxt->id, "Division by zero", 
              contxt->name); 
        return new_failure(); 
    }
}

/* 
`("<fmt>" <expr1> <expr2>)'
     returns a formatted string
*/
entry_p m_fmt(entry_p contxt)
{
    char *ret = NULL, *fmt = contxt->name; 
    char **sct = calloc((strlen(fmt) >> 1) + 1, sizeof(char *));
    if(contxt && fmt && sct)
    {
        int i = 0, j = 0, k = 0, l = 0; 
        entry_p *arg = contxt->children; 
        for(; fmt[i]; i++)
        {
            if(fmt[i] == '%')
            {
                if(!i || (i && fmt[i - 1] != '\\'))
                {
                    i++; 
                    if(fmt[i] == 's' || (
                       fmt[i++] == 'l' &&
                       fmt[i] && fmt[i] == 'd'))
                    {
                        sct[k] = calloc(i - j + 2, sizeof(char)); 
                        if(sct[k])
                        {
                            memmove(sct[k], fmt + j, i - j + 1);
                            j = i + 1;  
                            k++; 
                        }
                        else
                        {
                            error(PANIC);
                        }
                    }
                    else 
                    {
                        error(contxt->id, "Invalid format string", 
                        contxt->name); 
                        break; 
                    }
                }
            }
        }
        if(k)
        {
            for(k = 0; sct[k]; k++)
            {
                if(arg && *arg && 
                   *arg != SENTINEL)
                {
                    int oln = strlen(sct[k]);  
                    entry_p cur = resolve(*arg); 
                    if(sct[k][oln - 1] == 's' &&
                       cur->type == STRING)
                    {
                        int nln = oln + strlen(cur->name);  
                        char *new = calloc(nln + 1, sizeof(char)); 
                        if(new)
                        {
                            l += snprintf(new, nln, sct[k], cur->name);  
                            free(sct[k]); 
                            sct[k] = new; 
                        }
                        else
                        {
                            error(PANIC);
                        }
                    }
                    else
                    if(sct[k][oln - 1] == 'd' &&
                       cur->type == NUMBER)
                    {
                        int nln = oln + 16;  
                        char *new = calloc(nln + 1, sizeof(char)); 
                        if(new)
                        {
                            l += snprintf(new, nln, sct[k], cur->id);  
                            free(sct[k]); 
                            sct[k] = new; 
                        }
                        else
                        {
                            error(PANIC);
                        }
                    }
                    else
                    {
                        error(contxt->id, "Format string type mismatch", 
                        contxt->name); 
                    }
                    kill(cur); 
                    if(runtime_error())
                    {
                        arg = NULL; 
                        break;
                    }
                    else
                    {
                        arg++; 
                    }
                }
                else 
                {
                    error(contxt->id, "Missing format string arguments", 
                    contxt->name); 
                    break; 
                }
            }
        }
        if(k)
        {
            l += strlen(fmt + j); 
            ret = calloc(l + 1, sizeof(char)); 
            if(ret)
            {
                for(k = 0; sct[k]; k++)
                {
                    strcat(ret, sct[k]); 
                }
                strcat(ret, fmt + j); 
            }
            else
            {
                error(PANIC);
            }
        }
        for(k = 0; sct[k]; k++)
        {
            free(sct[k]);
        }
        free(sct);
        if(arg && *arg && 
           *arg != SENTINEL)
        {
            error(contxt->id, "Superfluous format string arguments", 
                  contxt->name); 
        }
        else
        if(ret)
        {
            return new_string(ret); 
        }
    }
    else
    {
        error(PANIC);
    }
    free(ret);
    return new_failure(); 
}

/* 
`(AND <expr1> <expr2>)'
     returns logical `AND' of `<expr1>' and `<expr2>'
*/
entry_p m_and(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        num(a) && num(b)
    );
}

/* 
`(OR <expr1> <expr2>)'
     returns logical `OR' of `<expr1>' and `<expr2>'
*/
entry_p m_or(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        num(a) || num(b)
    );
}

/* 
`(XOR <expr1> <expr2>)'
     returns logical `XOR' of `<expr1>' and `<expr2>'
*/
entry_p m_xor(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
        (num(a) && !num(b)) || 
        (num(b) && !num(a)) 
    );
}

/* 
`(NOT <expr>)'
     returns logical `NOT' of `<expr>'
*/
entry_p m_not(entry_p contxt)
{
    ONLY(a); 
    return new_number
    (
         !num(a)
    );
}

/* 
`(BITAND <expr1> <expr2>)'
     returns bitwise `AND' of `<expr1>' and `<expr2>'
*/
entry_p m_bitand(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
         num(a) & num(b)
    );
}

/* 
`(BITOR <expr1> <expr2>)'
     returns bitwise `OR' of `<expr1>' and `<expr2>'
*/
entry_p m_bitor(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
         num(a) | num(b)
    );
}

/* 
`(BITXOR <expr1> <expr2>)'
     returns bitwise `XOR' of `<expr1>' and `<expr2>'
*/
entry_p m_bitxor(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
         num(a) ^ num(b)
    );
}

/* 
`(BITNOT <expr>)'
     returns bitwise `NOT' of `<expr>'
*/
entry_p m_bitnot(entry_p contxt)
{
    ONLY(a); 
    return new_number
    (
         ~num(a)
    );
}

/* 
`(shiftleft <number> <amount to shift>)'
     logical shift left
*/
entry_p m_shiftleft(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
         num(a) << num(b)
    );
}

/* 
`(shiftright <number> <amount to shift>)'
     logical shift right
*/
entry_p m_shiftright(entry_p contxt)
{
    TWINS(a, b); 
    return new_number
    (
         num(a) >> num(b)
    );
}

/*
`(IN <expr> <bit-number> <bitnumber>...)'
     returns `<expr>' `AND' bits
*/
entry_p m_in(entry_p contxt)
{
    TWINS(a, b); 
    if(b->children)
    {
        int m = 0;  
        entry_p *cur = b->children; 
        while(*cur && *cur != SENTINEL)
        {
            m += 1 << num(*cur);
            cur++; 
        }
        return new_number(num(a) & m); 
    }
    error(PANIC);
    return new_failure();
}

/*
`(askdir (prompt..) (help..) (default..) (newpath) (disk))'
      ask for directory name

GRAMMAR: all options ignored

*/
entry_p m_askdir(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(askfile (prompt..) (help..) (default..) (newpath) (disk))'
     ask for file name

GRAMMAR: all options ignored

*/
entry_p m_askfile(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(askstring (prompt..) (help..) (default..))'
     ask for a string

GRAMMAR: all options ignored

*/
entry_p m_askstring(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(asknumber (prompt..) (help..) (range..) (default..))'
     ask for a number

GRAMMAR: all options ignored

*/
entry_p m_asknumber(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(askchoice (prompt..) (choices..) (default..))'
     choose 1 options

GRAMMAR: all options ignored

*/
entry_p m_askchoice(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(askoptions (prompt (help..) (choices..) default..))'
     choose n options

GRAMMAR: all options ignored

*/
entry_p m_askoptions(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(askbool (prompt..) (help..) (default..) (choices..))'
     0=no, 1=yes

GRAMMAR: all options ignored

*/
entry_p m_askbool(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(askdisk (prompt..) (help..) (dest..) (newname..) (assigns))'

GRAMMAR: all options ignored

*/
entry_p m_askdisk(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(cat <string1> <string2>...)'
     returns concatenation of strings
*/
entry_p m_cat(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(exists <filename> (noreq))'
     0 if no, 1 if file, 2 if dir

GRAMMAR: (noreq) is ignored

*/
entry_p m_exists(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(expandpath <path>)'
     Expands a short path to its full path equivalent
*/
entry_p m_expandpath(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(earlier <file1> <file2>)'
     true if file1 earlier than file2
*/
entry_p m_earlier(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(fileonly <path>)'
     return file part of path (see pathonly)
*/
entry_p m_fileonly(entry_p contxt)
{
    char *s; 
    int i, l; 
    ONLY(a); 
    s = str(a); 
    l = strlen(s); 
    i = l - 1; 
    if(l && 
       s[i] != '/' &&
       s[i] != ':' )
    {
        char *r; 
        while(i &&
              s[i - 1] != '/' && 
              s[i - 1] != ':' ) i--;
        r = calloc(l - i + 1, sizeof(char)); 
        if(r)
        {
            strncpy(r, s + i, l - i); 
            return new_string(r); 
        }
        error(PANIC); 
    }
    else
    {
        error(contxt->id, "Not a file", s); 
    }
    return new_failure(); 
}

/*
`(getassign <name> <opts>)'
     return value of logical name (no `:') `<opts>': 'v'-volumes,
     'a'-assigns, 'd'-devices
*/
entry_p m_getassign(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(getdevice <path>)'
     returns name of device upon which <path> resides
*/
entry_p m_getdevice(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(getdiskspace <path>)'
     return available space
*/
entry_p m_getdiskspace(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(getenv <name>)'
     return value of environment variable
*/
entry_p m_getenv(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(getsize <file>)'
     return size
*/
entry_p m_getsize(entry_p contxt)
{
    FILE *f; 
    char *n; 
    ONLY(a); 
    n = str(a); 
    f = fopen(n, "r"); 
    if(f)
    {
        int s; 
        fseek(f, 0L, SEEK_END);
        s = ftell(f);
        fclose(f); 
        return new_number(s); 
    }
    else
    {
        error(contxt->id, "Could not open file", n); 
        return new_failure(); 
    }
}

/*
`(getsum <file>)'
     return checksum of file for comparison purposes
*/
entry_p m_getsum(entry_p contxt)
{
    FILE *f; 
    char *n; 
    ONLY(a); 
    n = str(a); 
    f = fopen(n, "r"); 
    if(f)
    {
        int c = getc(f); 
        unsigned int s = 0, n = 1;
        while(c != EOF)
        {
            s -= (c + n);
            c = getc(f); 
            n = ~s; 
        }
        fclose(f); 
        return new_number(s); 
    }
    else
    {
        error(contxt->id, "Could not open file", n); 
        return new_failure(); 
    }
}

/*
`(getversion <file> (resident))'
     return version/revision of file, library, etc. as 32 bit num

GRAMMAR: (resident) is missing

*/
entry_p m_getversion(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(iconinfo <parameters>)'
      return information about an icon (V42.12)
*/
entry_p m_iconinfo(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
 `(pathonly <path>)'
      return dir part of path (see fileonly)
*/
entry_p m_pathonly(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(patmatch <pattern> <string>)'
      Does <pattern> match <string> ? TRUE : FALSE
*/
entry_p m_patmatch(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(select <n> <item1> <item2> ...)'
    return n'th item
*/
entry_p m_select(entry_p contxt)
{
    TWINS(a, b); 
    if(b->children)
    {
        int i = 0, j = num(a) - 1; 
        while(b->children[i] && 
              b->children[i] != SENTINEL)
        {
            if(i == j)
            {
                return resolve(b->children[i]); 
            }
            else
            {
                i++; 
            }
        }
        error(contxt->id, "No such item", 
              contxt->name); 
    }
    else
    {
        error(PANIC); 
    }
    return new_failure(); 
}

/*
`(strlen <string>)'
    returns string length
*/
entry_p m_strlen(entry_p contxt)
{
    ONLY(a); 
    return new_number
    (
        strlen(str(a))
    );
}

/*
`(substr <string> <start> [<count>])'
    returns a substring of <string>
*/
entry_p m_substr(entry_p contxt)
{
    TWINS(a, b); 
    if(b->children &&
       b->children[0] && 
       b->children[0] != SENTINEL) 
    {
        char *r, *s = str(a);
        int n, l = strlen(s); 
        int i = num(b->children[0]); 
        i = i > 0 ? i : 0;  
        i = i >= l ? 0 : i; 
        n = l - i; 
        if(b->children[1] && 
           b->children[1] != SENTINEL) 
        {
            int j = num(b->children[1]); 
            j = j > 0 ? j : n; 
            n = j < n ? j : n; 
        }
        r = calloc(n + 1, sizeof(char)); 
        if(r)
        {
            strncpy(r, s + i, n); 
            return new_string(r); 
        }
    }
    error(PANIC);
    return new_failure(); 
}

/*
`(symbolset <symbolname> <expression>)'
    assign a value to a variable named by the string result of
    `<symbolname>' (V42.9)
*/
entry_p m_symbolset(entry_p contxt)
{
    TWINS(a, b); 
    if(contxt->symbols)
    {
        entry_p res = resolve(b); 
        if(res && !runtime_error())
        {
            int i = 0; 
            entry_p glb = global(contxt); 
            while(contxt->symbols[i] &&
                  contxt->symbols[i] != SENTINEL) 
            {
                if(!strcmp(contxt->symbols[i]->name, str(a)))
                {
                    kill(contxt->symbols[i]->expression);
                    contxt->symbols[i]->expression = resolve(res); 
                    kill(contxt->symbols[i]->resolved);
                    contxt->symbols[i]->resolved = resolve(res); 
                    return res; 
                }
                i++; 
            }
            if(contxt->symbols[i])
            {
                int n = i << 1, j = 0; 
                entry_p *new = calloc(1 + n, sizeof(entry_p));
                if(new)
                {
                    new[n] = SENTINEL; 
                    contxt->symbols[i] = NULL; 
                    memmove(new, contxt->symbols, i * sizeof(entry_p)); 
                    free(contxt->symbols); 
                    while(new[j])
                    {
                        push(glb, new[j]); 
                        j++; 
                    }
                    contxt->symbols = new;
                }
            }
            if(!contxt->symbols[i])
            {
                entry_p sym = new_symbol(strdup(str(a)), resolve(res)); 
                if(sym)
                {
                    res->parent = b; 
                    sym->resolved = resolve(res); 
                    contxt->symbols[i] = sym; 
                    push(global(contxt), sym); 
                    return res; 
                }
            }
            kill(res); 
        }
    }
    error(PANIC); 
    return new_failure(); 
}

/*
`(symbolval <symbolname>)'
    returns the value of the symbol named by the string expression
    `<smbolval>' (V42.9)
*/
entry_p m_symbolval(entry_p contxt)
{
    entry_p ref; 
    ONLY(a); 
    ref = new_symref(strdup(str(a)), contxt->id); 
    if(ref)
    {
        entry_p val; 
        ref->parent = contxt; 
        val = resolve(ref); 
        kill(ref); 
        if(!runtime_error())
        {
            return val; 
        }
    }
    else
    {
        error(PANIC);
    }
    return new_failure(); 
}

/*
`(tackon <path> <file>)'
     return properly concatenated file to path
*/
entry_p m_tackon(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(transcript <string1> <string2>)'
     puts concatenated strings in log file
*/
entry_p m_transcript(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(makedir <name> (prompt..) (help..) (infos) (confirm..) (safe))'
     make a directory
*/
entry_p m_makedir(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(copyfiles (prompt..) (help..) (source..) (dest..) (newname..) (choices..)'
     `(all) (pattern..) (files) (infos) (confirm..) (safe) (optional
     <option> <option> ...) (delopts <option> <option> ...) (nogauge))'

     copy files (and subdir's by default).  files option say NO
     subdirectories
*/
entry_p m_copyfiles(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(copylib (prompt..) (help..) (source..) (dest..) (newname..) (infos) (confirm)'
     `(safe) (optional <option> <option> ...) (delopts <option>
     <option> ...) (nogauge))'

     install a library if newer version
*/
entry_p m_copylib(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(startup (prompt..) (command..))'
     add a command to the boot scripts (startup-sequence, user-startup)
*/
entry_p m_startup(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(tooltype (prompt..) (help..) (dest..) (settooltype..) (setstack..)'
     `(setdefaulttool..) (noposition) (confirm..) (safe))'

     modify an icon
*/
entry_p m_tooltype(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(textfile (prompt..) (help..) (dest..) (append) (include..) (confirm..) (safe))'
     create text file from other text files and strings
*/
entry_p m_textfile(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(execute <arg> (help..) (prompt..) (confirm) (safe))'
     execute script file
*/
entry_p m_execute(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(run <arg> (help..) (prompt..) (confirm..) (safe))'
     execute program
*/
entry_p m_run(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(rexx <arg> (help..) (prompt..) (confirm..) (safe))'
     execute ARexx script
*/
entry_p m_rexx(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(makeassign <assign> <path> (safe)) ; note: <assign> doesn't need `:''
     create an assignment
*/
entry_p m_makeassign(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(rename <old> <new> (help..) (prompt..) (confirm..) (safe))'
     rename files
*/
entry_p m_rename(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(delete file (help..) (prompt..) (confirm..) (infos) (optional <option> <option> ...) (all)'
     `(delopts <option> <option> ...) (safe))'

     delete file
*/
entry_p m_delete(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(protect <file> [<string of flags to change>] [<decimal mask>] <parameters>)'
     get/set file protection flags
*/
entry_p m_protect(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(complete <num>)'
     display percentage through install in titlebar
*/
entry_p m_complete(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(message <string1> <string2>... (all))'
     display message with Proceed, Abort buttons
*/
entry_p m_message(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(working)'
     indicate to user that Installer is busy doing things
*/
entry_p m_working(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(welcome <string> <string> ...)'
     allow Installation to commence.
*/
entry_p m_welcome(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(foreach <dir> <pattern> <statements>)'
     do for entries in directory
*/
entry_p m_foreach(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(abort <string1> <string2> ...)'
     abandon installation
*/
entry_p m_abort(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(exit <string> <string> ... (quiet))'
     end installation after displaying strings (if provided)
*/
entry_p m_exit(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(trap <flags> <statements>)'
     trap errors.  flags: 1-abort, 2-nomem, 3-error, 4-dos, 5-badargs
*/
entry_p m_trap(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(onerror (<statements>))'
     general error trap
*/
entry_p m_onerror(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(user <user-level>)'
   change the user level (debugging purposes only)
*/
entry_p m_user(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(debug <anything> <anything> ...)'
    print to stdout when running from a shell
*/
entry_p m_debug(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

/*
`(database <feature> [<checkvalue>])'
    return information about the Amiga that the Installer 
    is running on.  
*/
entry_p m_database(entry_p contxt)
{
    error(MISS); 
    return new_failure(); 
}

