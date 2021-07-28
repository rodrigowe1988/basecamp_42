#include <unistd.h>

int	main(void)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 4;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j <= 2 * i)
		{
			write(1, "*", 1);
			j++;
		}
		if (i < count - 1)
			write(1, "", 1);
		write(1, "\n", 1);
		i++;
	}
}
