#include "ft_printf.h"

int print_pointer(unsigned long n)
{
    char        *sym;

    sym = "0123456789abcdef";
    if (n == 0)
    {
        return write(1, "(nil)", 5);
    }
    write(1, "0x", 2);
    if (n < 16)
    {
        return print_char(sym[n]);
    }
    else
    {
        return print_p(n) + 2;
    }
}