#include <stdio.h>

void main ()
{
	int i=0;
	float max;

	printf("enter three numbers: ");
	fflush(stdin);fflush(stdout);

	for (i;i<3;i++)
	{
		float n;
		scanf("%f",&n);

		if(i==0)
			max=n;
		else
		{
			if (max<n)
				max=n;
		}
	}

	printf("largest number = %f",max);
}
