#include <stdio.h>

void main()
{
	int n ;
	printf("enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	printf("sum = %d",n*(n+1)/2);
}
