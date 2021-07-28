#include <stdio.h>

int 	soma(int, int);

int		main(void)
{ 
	int 	sum = soma(5, 13);

	printf("%d\n", sum);
}

int 	soma(int num1, int num2)
{
	return(num1+num2);
}