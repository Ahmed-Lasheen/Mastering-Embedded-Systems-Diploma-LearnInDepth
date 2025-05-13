#include <stdio.h>
#define pi 3.14
#define area(r)  (pi*r*r)
void main()
{
	float r;

	printf("enter radius : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);
	printf("%.2f",area(r));
}
