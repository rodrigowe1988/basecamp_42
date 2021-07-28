#include <stdio.h>

int main(void)
{
	int	a;
	int	*ptr;

	a = 5;
	ptr = &a;
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	*ptr =42;
	printf("%d\n", *ptr);
	printf("%d\n", ptr);
	printf("%p\n", *ptr); 
	return (0);
}
