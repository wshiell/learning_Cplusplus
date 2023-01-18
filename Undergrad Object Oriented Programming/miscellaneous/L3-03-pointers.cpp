#include <stdio.h>

int main()
{
	int *ptr, i=42, k=477, l=43;

	/* address of i is assigned to ptr */
	ptr = &i;   

	printf("Value of i : %d\n", *ptr); 
	printf("Value of k : %d\n", *(ptr-1));
	printf("Value of l : %d\n", *(ptr-2));

	return 0;
}
