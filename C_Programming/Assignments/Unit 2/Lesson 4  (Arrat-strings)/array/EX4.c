#include <stdio.h>

int main(){

	int n,a[100];
	int new,idx;
	int i,temp;


	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}


	printf("enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&new);


	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&idx);

	for(i=0;i<=n;i++)
	{
		if(i<idx-1)
	         continue;

		else if(i==idx-1)
		{
		temp=a[i];
		a[i]=new;
		}

		else if (i<n)
		{
		 temp*=a[i];
		 a[i]=temp/a[i];
		 temp/=a[i];

		}
		else
			a[i]=temp;
	}



	fflush(stdin);fflush(stdout);


	for(i=0;i<=n;i++)
		{
			printf("%d",a[i]);
		}
}
