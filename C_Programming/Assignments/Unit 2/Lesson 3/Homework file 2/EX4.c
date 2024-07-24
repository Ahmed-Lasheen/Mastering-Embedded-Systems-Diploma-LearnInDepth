#include <stdio.h>

void main ()
{
	float n;
	printf("enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n);

	if (n>0)
		printf("%f is positive",n);
	else if (n<0)
		printf("%f is negative",n);
	else
		printf("you entered zero");
}
