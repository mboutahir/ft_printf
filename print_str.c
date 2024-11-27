#include "ft_printf.h"

int print_str(char *s)
{
    int i;

    i = 0;
    if(!s)
    {
        return write(1, "(null)", 6);
    }
    while (s[i])
    {
        print_char(s[i]);
        i++;
    }
    return i;
}