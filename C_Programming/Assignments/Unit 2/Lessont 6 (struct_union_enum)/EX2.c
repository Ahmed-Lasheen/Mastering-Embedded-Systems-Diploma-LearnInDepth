#include <stdio.h>

struct SDistance
{
 float feet;
 float inch;
}d1,d2;

void main()
{
	printf("Enter information for 1st distance\n");
	printf("Enter Feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);

	printf("Enter information for 2nd distance\n");
	printf("Enter Feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);

	int sumFeet=d1.feet+d2.feet+(d1.inch+d2.inch)/12;
	float sumInch=(d1.inch+d2.inch);
	while (sumInch>12)
		sumInch-=12;


	printf("sum of distances = %d'-%.1f\"",sumFeet,sumInch);



}
