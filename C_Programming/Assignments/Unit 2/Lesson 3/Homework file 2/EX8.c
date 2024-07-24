#include <stdio.h>

void main()
{
	float a,b;
	char operator;

	printf("enter operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);

	printf("enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);

	switch(operator)
	{
	case '+': {printf("%f",a+b); break;}
	case '-': {printf("%f",a-b); break;}
	case '/': {printf("%f",a/b); break;}
	case '*': {printf("%f",a*b); break;}
	}
}
