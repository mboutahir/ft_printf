/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:45:02 by mboutahi          #+#    #+#             */
/*   Updated: 2024/12/04 17:26:06 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(int specifier, va_list arg)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(arg, int));
	else if (specifier == 's')
		count += print_str(va_arg(arg, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_degit(va_arg(arg, int), specifier, 10);
	else if (specifier == 'x' || specifier == 'X')
		count += print_degit(va_arg(arg, unsigned int), specifier, 16);
	else if (specifier == 'p')
		count += print() + print_pointer(va_arg(arg, unsigned long));
	else if (specifier == 'u')
		count += print_unsigned(va_arg(arg, unsigned int));
	else
	{
		write(1, &specifier, 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	arg;

	va_start(arg, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			count += print_format((int)format[++i], arg);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		if (format[i])
			i++;
	}
	return (va_end(arg), count);
}
