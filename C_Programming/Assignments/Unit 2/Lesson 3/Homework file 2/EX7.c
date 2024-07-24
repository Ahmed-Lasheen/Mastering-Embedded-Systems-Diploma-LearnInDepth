#include <stdio.h>

void main()
{
	int n;
 printf("enter an integer: ");
 fflush(stdin);fflush(stdout);
scanf("%d",&n);

if(n==0)
	printf("%d",1);
else if (n<0)
	printf("Error!!! Factorial of negative number doesn't exist");
else
{
	int i;
	for (i=n-1;i>=1;i--)
	{
		n*=i;
	}
	printf("factorial = %d",n);
}

}
