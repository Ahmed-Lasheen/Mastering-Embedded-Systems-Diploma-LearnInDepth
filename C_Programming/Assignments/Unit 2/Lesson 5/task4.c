#include <stdio.h>
#include <string.h>

int power (int base ,int pow);

void main ()
{

	int base,pow;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter power(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&pow);

	printf("%d^%d = %d",base,pow,power(base,pow));

}




int power (int base ,int pow)
{
	if (pow==0)
		return 1;
	return base*power(base,pow-1);
}
