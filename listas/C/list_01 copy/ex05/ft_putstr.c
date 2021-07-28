#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*letter;

	letter = str;
	while (*letter != '\0')
	{
		write(1, letter, 1);
		letter++;
	}
}
