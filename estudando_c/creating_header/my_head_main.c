#include <stdio.h>
#include "my_head.h"
int main()
{
    add(4, 6);
    /*This calls add function written in my_head.h  
      and therefore no compilation error.*/
    
	multiply(5, 5);
    // Same for the multiply function in my_head.h
    
	printf("BYE!See you Soon");
    return 0;
}