
#include "ft_printf.h"

int print_degit(long n, int specifier, int base)
{
	int     count;
	char    *sym;
	char    *SYM;

	sym = "0123456789abcdef";
	SYM = "0123456789ABCDEF";

	if (n == -2147483648 && base == 10)
	{
		return write(1,"-2147483648",  11);
	}
	else if (n < 0 && specifier != 'p')
	{
		write(1, "-", 1);
		return (print_degit(-n, specifier, base)) + 1;
	}
	else if (n < base && specifier != 'X')
		return print_char(sym[n]);
	else if (n < base && specifier == 'X')
		return print_char(SYM[n]);
	else
	{
		count = print_degit(n / base, specifier, base);
		return count + print_degit(n % base, specifier, base);
	}
}