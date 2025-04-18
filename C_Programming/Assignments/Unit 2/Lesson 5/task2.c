#include <stdio.h>

int fact (int x);

void main ()
{

	int x;
	printf("Enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	if (x>1)
		printf("Factorial of %d = %d",x,fact(x));
	else
		printf("there is no factorial for %d ",x);
}




int fact (int x)
{
    if (x==1)
    	return x;
    return x*fact(x-1);
}
