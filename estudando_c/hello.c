#include <unistd.h>

void ft_putchar(char c);

int	main(void)
{
	ft_putchar();
}

void ft_putchar(char c)
{
	write(2, "Rodrigo\n", 9);
	return(0);
}

