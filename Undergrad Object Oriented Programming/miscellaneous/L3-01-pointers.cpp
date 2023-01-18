#include <stdio.h>

int main()
{
	int *ptr, i;
	i = 11;  

	/* address of i is assigned to ptr */
	ptr = &i;   

	/* show the value of ptr */
	printf("Value of ptr: %p\n", ptr);

	/* show i's value using ptr variable */      
	printf("Value of i : %d\n", *ptr); 

	return 0;
}
