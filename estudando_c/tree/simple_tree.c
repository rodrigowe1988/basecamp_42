#include <unistd.h>

int	main(void)
{
	int	i;
	int	j;
	int	count;
	
	i = 0;
	count = 3;
	while (i < count)
	{
		j = 0;
		while (j <= 2 * i)
		{
			write(1, "*", 1);
			j++;
		}
		if (i < count - 1)
			write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	write(1, "Rodrigo Weber, 2021 July", 25);
}
