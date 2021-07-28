#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int numbers[4][4] = {
		{1, 2, 3, 4},
		{4, 3, 2, 1},
		{3, 4, 1, 2},
		{2, 1, 4, 3}
	};
	int i, j;
	printf("Two Dimensional array elements:\n");
	for(i=0; i<4; i++) 
	{
    	for(j=0;j<4;j++) 
		{
        	printf("%d ", numbers[i][j]);
        	if(j==3)
        		printf("\n");
		}
	}
	return (0);
}
