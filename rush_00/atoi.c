#include<unistd.h>

void	rush(int x, int y);
int		ft_atoi(char *arr);

int	main(int argc, char *argv[])
{
	if (argc < 3)
	{
		write(2, "You must pass at least two arguments.\n", 39);
		return (0);
	}
	if (argv[1][0] == '-' || argv[2][0] == '-')
	{
		write(2, "You must give positive numbers.\n", 32);
		return (0);
	}
	if (argc > 3)
	{
		write(2, "You must pass only two arguments.\n", 36);
		return (0);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}

int	ft_atoi(char *arr)
{
	int	i;
	int	number;

	number = 0;
	i = 0;
	if (arr[0] == '+')
		i++;
	while (arr[i] >= '0' && arr[i] <= '9')
	{
		number *= 10;
		number += arr[i] - 48;
		i++;
	}
	return (number);
}
