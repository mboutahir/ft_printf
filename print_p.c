#include "ft_printf.h"

int print_p(unsigned long n)
{
    int         count;
    char        *sym;

    sym = "0123456789abcdef";

    if (n < 16)
    {
        return print_char(sym[n]);
    }
    else
    {
        count = print_p(n / 16);
        return count + print_p(n % 16);
    }
}