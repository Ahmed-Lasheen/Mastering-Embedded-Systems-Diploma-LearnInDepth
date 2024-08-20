#include <stdio.h>

int main(){
	int r,c;
	int i,j;
	int a[6][6];
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);

	for (i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter elemnt a[%d][%d]: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%d",&a[i][j]);
			}
		}

	printf("\nEntered matrix:\n");
	for (i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);

			}
			printf("\n");
		}
	printf("\ntranspose of matrix:\n");
		for (i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					printf("%d\t",a[j][i]);

				}
				printf("\n");
			}

}
