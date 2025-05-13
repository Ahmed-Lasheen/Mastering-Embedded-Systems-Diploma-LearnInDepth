#include <stdio.h>

struct SComplex
{
 float imag;
 float real;
}z1,z2;

void main()
{
		printf("For 1st complex number \n"
				" Enter real and imaginary respectively :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&z1.real,&z1.imag);
		printf("For 2nd complex number \n"
						" Enter real and imaginary respectively :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&z2.real,&z2.imag);

		printf("sum = %.1f+(%.1fi)",z1.real+z2.real,z1.imag+z2.imag);
}
