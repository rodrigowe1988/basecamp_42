#include <unistd.h>

int main(void)
{
	int i;
	int j;

	i = 5;
	j = 4 + '0';
	write(1, &j, 1);
	j = i + '2';
	write(1, &j, 1);
	return (0);
}