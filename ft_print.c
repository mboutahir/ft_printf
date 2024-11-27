#include "ft_printf.h"

int print_format(int specifier, va_list arg)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(arg, int));
	else if (specifier == 's')
		count += print_str(va_arg(arg, char *));    
	else if (specifier == 'd' || specifier == 'i')
		count += print_degit(va_arg(arg, int), specifier, 10);
	else if (specifier == 'x' || specifier == 'X')
		count += print_degit((long)va_arg(arg, unsigned int), specifier, 16);
	else if (specifier == 'p')
		count += print_pointer(va_arg(arg, unsigned long));
	else if (specifier == 'u')
		count += print_unsigned(va_arg(arg, unsigned int));
	return count;
}

int ft_printf(const char *format, ...)
{
	int count;
	va_list arg;
	int	i;

	i = 0;
	va_start(arg, format);
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if(format[i + 1] == '%')
			{
				count += write(1, "%", 1);
				i += 2;
				continue;
			}
			else
				count += print_format(format[++i], arg);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (count);
}
int main()
{

	 int count = printf("%p\n", p);
	int count1 = ft_printf("%p", p);

	 printf("%d \n", count);
	 ft_printf("%d", count1);
	
}