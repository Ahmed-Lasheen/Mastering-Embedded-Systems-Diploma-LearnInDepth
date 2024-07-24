#include <stdio.h>

int main() // Changed void to int
{
	int a, b;
	printf("Enter two integers: ");
	//fflush(stdin);fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("Sum: %d\n", a + b); // Added a newline character
	return 0; // Added return statement
 }
