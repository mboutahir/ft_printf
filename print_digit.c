/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:45:16 by mboutahi          #+#    #+#             */
/*   Updated: 2024/12/01 15:33:32 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_degit(long n, int specifier, int base)
{
	int		count;
	char	*sym;
	char	*symg;

	sym = "0123456789abcdef";
	symg = "0123456789ABCDEF";
	if (n == -2147483648 && base == 10)
	{
		return (write(1, "-2147483648", 11));
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		return ((print_degit(-n, specifier, base)) + 1);
	}
	else if (n < base && specifier != 'X')
		return (print_char(sym[n]));
	else if (n < base && specifier == 'X')
		return (print_char(symg[n]));
	else
	{
		count = print_degit(n / base, specifier, base);
		return (count + print_degit(n % base, specifier, base));
	}
}
