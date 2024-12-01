/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:45:07 by mboutahi          #+#    #+#             */
/*   Updated: 2024/12/01 15:30:46 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_degit(long n, int specifier, int base);
int	print_str(char *s);
int	print_char(int c);
int	print_unsigned(unsigned int n);
int	print_pointer(unsigned long n);
int	print(void);

#endif