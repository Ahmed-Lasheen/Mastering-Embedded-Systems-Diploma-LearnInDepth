#include <stdio.h>

int main(){

	float A[2][2],B[2][2];
	int i,j;

	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter A[%d][%d]: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&A[i][j]);
		}
	}

	for (i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enter B[%d][%d]: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&B[i][j]);
			}
		}

	printf("\n\nSum of Matrix:\n\n");
	for (i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%.1f    ",A[i][j]+B[i][j]);
			}
			printf("\n");
		}
}
