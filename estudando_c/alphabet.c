#include <unistd.h>

int main(void)
{
	int c;
	c = 65;
	while(c<97)
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}