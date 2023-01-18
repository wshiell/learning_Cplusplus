#include <stdio.h>

int main()
{
	int *ptr;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	/* address of a[0] */
	printf("Address of a[0]:       a %p\n",a) ;
	printf("Address of a[0]:   &a[0] %p\n",&a[0]) ;
	printf("Address of a[0]:     a+0 %p\n",a+0) ;
	printf("Address of a[0]: &a[6]-6 %p\n",&a[6]-6) ;
	printf("\n") ;

	/* Value of a[0] */
	printf("Value of a[0]  :       a[0] %d\n",a[0]) ;
	printf("Value of a[0]  :         *a %d\n",*a) ;
	printf("Value of a[0]  :   *(&a[0]) %d\n",*(&a[0])); 
	printf("Value of a[0]  :     *(a+0) %d\n",*(a+0)); 
	printf("Value of a[0]  : *(&a[4]-4) %d\n",*(&a[4]-4)); 
	printf("\n") ;

	/* Value of a[1] */
	printf("Value of a[1]  :        a[1] %d\n",a[1]) ;
	printf("Value of a[1]  :    *(&a[1]) %d\n",*(&a[1])); 
	printf("Value of a[1]  :      *(a+1) %d\n",*(a+1)); 
	printf("Value of a[1]  : *(&a[-3]+4) %d\n",*(&a[-3]+4)); 
	printf("\n") ;

	return 0;
}
