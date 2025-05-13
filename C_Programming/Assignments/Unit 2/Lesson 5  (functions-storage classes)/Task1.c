#include <stdio.h>
void prime(int a,int b);


int main()
{

	int a,b;
	printf("Enter Two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between %d and %d are: ",a,b);
	fflush(stdout);
	prime(a,b);

	return 0;

}

void prime(int a,int b)
{
	int i;
	int j;

	for(i=a;i<=b;i++)
	{
		int prime_bool=1;
		for(j=2;j<i;j++)
		{
			if (i%j==0)
				prime_bool=0;

		}
		if(prime_bool)
			printf("%d ",i);
		fflush(stdout);

	}
}


