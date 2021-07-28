#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*letter;
	int		len;

	len = 0;
	letter = str;
	while (*letter != '\0')
	{
		len += 1;
		letter++;
	}
	return (len);
}

int main(void)
{
	ft_strlen("Rodrigo");
	//return (0);
}