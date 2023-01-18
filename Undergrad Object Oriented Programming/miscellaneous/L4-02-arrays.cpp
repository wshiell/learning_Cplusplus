#include <stdio.h>

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *ip, *ip2;
	int i ;

	ip = &a[3] ;
	ip2 = ip + 1 ;

	// two ways of getting the address of a[3] and a[4]
	printf("&a[3]: %p\n",&a[3]) ;
	printf("&a[4]: %p\n",&a[4]) ;
	printf("ip   : %p\n",ip) ;
	printf("ip2  : %p\n",ip2) ;

	// modify a[4] ?
	*(ip + 1) = 5 ;

	// the array
	printf("array address: %p\n",&a[0]) ;
	for ( i = 0 ; i < 10 ; i++ ) printf("a[%d] = %d\n",i,a[i]) ;
	printf("\n") ;

	// modify a[4] ?
	*ip2 = 345 ;

	// the array
	printf("array address: %p\n",&a[0]) ;
	for ( i = 0 ; i < 10 ; i++ ) printf("a[%d] = %d\n",i,a[i]) ;
	printf("\n") ;

	return 0;
}
