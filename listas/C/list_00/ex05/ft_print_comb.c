#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	write(1, number, 3);
	number[2] = '3';
	while (number[0] <= '7')
	{
		while (number[1] <= '8')
		{
			while (number[2] <= '9')
			{
				write(1, ", ", 2);
				write(1, number, 3);
				number[2]++;
			}
			number[2] = ++number[1] + 1;
		}
		number[1] = ++number[0] + 1;
		number[2] = number[1] + 1;
	}
}

int	main(void)
{
	ft_print_comb();
}
