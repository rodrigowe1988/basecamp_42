#include <unistd.h>

int main(void)
{
	char numbers[4][4] = {
		{'5', '2', '3', '4'},
		{'7', '3', '2', '1'},
		{'3', '4', '1', '2'},
		{'2', '1', '4', '3'}
	};
	int i, j;
	write(1, "Two Dimensional array elements:\n", 32);
	i = '0';
	while (i < '4')
	{
		j = '0';
		while (j < '4')
		{
			write(1, numbers, 1);
			numbers + 1;
			j++;
			if (j == '4')
				write(1, "\n", 1);
		}
	i++;
	}
	return (0);
}