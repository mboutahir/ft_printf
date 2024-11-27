#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int print_degit(long n, int specifier, int base);
int print_str(char *s);
int print_char(int c);
int print_unsigned(unsigned int n);
int print_pointer(unsigned long n);
int print_p(unsigned long n);

#endif