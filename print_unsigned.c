#include "ft_printf.h"

int print_unsigned(unsigned int n)
{
    int     count;
    char    *sym;

    sym = "0123456789";

    if (n < 10)
        return print_char(sym[n]);
    else
    {
        count = print_unsigned(n / 10);
        return count + print_unsigned(n % 10);
    }
}