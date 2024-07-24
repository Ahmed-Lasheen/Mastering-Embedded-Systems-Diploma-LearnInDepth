#include <stdio.h>

int main() // Changed void to int
{
	float a,b,c;
	printf("enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);

	printf("enter value of b: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);

	c=a;
	a=b;
	b=c;

	printf("after swapping, value of a = %f\n",a);
	printf("after swapping, value of b = %f\n",b);

}
