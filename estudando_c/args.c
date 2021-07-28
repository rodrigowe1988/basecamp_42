#include <stdio.h>

float	sum(int, float);

int 	main(void)
{
	
	printf("%.2f\n", sum(5, 3.14));
	return(0);
}

float sum(int num1, float num2)
{
	return(num1 + num2);
}
	
