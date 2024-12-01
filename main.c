#include <stdio.h>
#include  <fcntl.h>
#include "ft_printf.h"
int main()
{
	close(1);
	printf("%d\n", ft_printf("sd%d", 12));
	printf("%d\n", printf("sd%d", 12));
}