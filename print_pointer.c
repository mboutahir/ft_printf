/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:45:22 by mboutahi          #+#    #+#             */
/*   Updated: 2024/12/01 12:10:23 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print(void)
{
	return (write(1, "0x", 2));
}

int	print_pointer(unsigned long n)
{
	char	*sym;
	int		count;

	sym = "0123456789abcdef";
	if (n == 0)
	{
		return (write(1, "0", 1));
	}
	if (n < 16)
	{
		return (print_char(sym[n]));
	}
	else
	{
		count = print_pointer(n / 16);
		return (count + print_pointer(n % 16));
	}
}
