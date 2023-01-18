#include <stdio.h>

int main()
{
	int *ptr,i,k ;
	int *ptr2,L ;

	/* address of i is assigned to ptr */
	ptr = &i;

	/* ptr2 is assigned address of next int after i */
	ptr2 = ptr + 1 ;

	/* L is the number of ints between ptr and ptr2 */
	L = ptr2 - ptr ;

	printf("Value of i   : %d\n", *ptr);
	printf("Value of ptr?: 0x%x\n", *(ptr+1));
	printf("Value of ptr : 0x%lx\n", (unsigned long) ptr);
	printf("Value of ptr2: 0x%lx\n", (unsigned long) ptr2);
	printf("Value of L   : %d\n", L);

	return 0;
}
