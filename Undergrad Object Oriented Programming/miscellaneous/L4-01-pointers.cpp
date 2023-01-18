#include <stdio.h>

int main()
{
	int *ptr;
	int a[3] = {43,477,34};

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   

	printf("Value of a[0] : %d\n", *ptr); 
	printf("Value of a[1] : %d\n", *(ptr+1));
	printf("Value of a[2] : %d\n", *(ptr+2));

	return 0;
}
