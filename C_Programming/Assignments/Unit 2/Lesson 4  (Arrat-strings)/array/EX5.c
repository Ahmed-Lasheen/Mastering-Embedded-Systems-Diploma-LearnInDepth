#include <stdio.h>

int main(){

	int n,a[20];
	int srch;
	int i;


	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&srch);

	for(i=0;i<n;i++)
	{
		if(srch==a[i])
		{
			printf("Number found at the location = %d",i+1);
		    return 0;
		}
	}
	printf("number not found");
}
