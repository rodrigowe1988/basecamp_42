#include <unistd.h>

int main(void)
{
	for(int i = 0; i < 5; i++)
	{   	
		for(int j = i + 1; j < 5; j++)
       		write(1," ",1);
    	for(int j = 0; j <= 2*i; j++)
       		write(1,"*",1);
    	if(i < 5 - 1) 
			write(1,"",1);
		write(1, "\n", 1);
	}
}