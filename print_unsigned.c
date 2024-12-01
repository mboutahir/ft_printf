/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:45:29 by mboutahi          #+#    #+#             */
/*   Updated: 2024/12/01 12:01:44 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int		count;
	char	*sym;

	sym = "0123456789";
	if (n < 10)
		return (print_char(sym[n]));
	else
	{
		count = print_unsigned(n / 10);
		return (count + print_unsigned(n % 10));
	}
}
