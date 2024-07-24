#include <stdio.h>

int main() // Changed void to int
{
	float a,b;
	printf("enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);

	printf("product: %f",a*b);
}
