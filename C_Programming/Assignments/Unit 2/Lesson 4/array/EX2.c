#include <stdio.h>

int main(){

	float arr[200],sum=0;
	int n,i;

	printf("Enter numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	printf("\nAverage = %.2f",sum/n);

}
