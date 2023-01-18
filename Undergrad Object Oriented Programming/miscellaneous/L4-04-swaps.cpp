#include <stdio.h>

void swapAA(int a[],int b[])
{
	int t = a[0] ; a[0] = b[0] ; b[0] = t ;
}

void swapAP(int a[],int b[])
{
	int t = *a ; *a = *b ; *b = t ;
}

void swapPA(int *a,int *b)
{
	int t = a[0] ; a[0] = b[0] ; b[0] = t ;
}

void swapPP(int *a,int *b)
{
	int t = *a ; *a = *b ; *b = t ;
}

int main()
{
	int x = 5,y = 2 ;

	printf("x %d,y %d\n",x,y) ;
	swapAA(&x,&y) ;
	printf("x %d,y %d\n",x,y) ;
	swapAP(&x,&y) ;
	printf("x %d,y %d\n",x,y) ;
	swapPA(&x,&y) ;
	printf("x %d,y %d\n",x,y) ;
	swapPP(&x,&y) ;
	printf("x %d,y %d\n",x,y) ;
}
