#include <unistd.h>

void	print(int *range, int n)
{
	int	i;
	int	display;

	display = 1;
	i = 0;
	while (++i < n)
		if (range[i - 1] >= range[i])
			display = 0;
	if (!display)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10]; // array com 10 números

	if (n > 10 || n < 0) // caso o n informado seja maior que 10 ou menos que 0 o soft. para!!
		return ;
	i = -1; // i começa em -1 para..
	
	while (++i < n)
		range[i] = i; // númera o array de 0 a 9
		
	while (range[0] <= (10 - n) && n >= 1) // enquanto o primeiro número do range for menor que (10 - n), ou seja, o maior número possível, no primeiro algarismo, sempre vai ser 10 - n;
	{	
		print(range, n);

		if (n == 10)
			break ;

			
		range[n - 1]++;

		i = n;

		while (i && n > 1)
		{
			
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
