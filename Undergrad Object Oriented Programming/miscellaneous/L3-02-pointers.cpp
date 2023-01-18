#include <stdio.h>

int main()
{
	int *ptr, i;
	i = 11;  

	/* address of i is assigned to ptr */
	ptr = &i;   

	/* increment the value of i */
	(*ptr)++;

	/* show i's value using ptr variable */      
	printf("Value of i : %d\n", i); 

	return 0;
}
