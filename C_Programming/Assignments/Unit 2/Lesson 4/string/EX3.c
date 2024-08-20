#include <stdio.h>
#include <string.h>

int main()
{
	char c[100],s[100];
	short i,j;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(c);

	i = strlen(c);

	for (j=0;j<i;j++)
		s[j]=c[i-j-1];

	printf("Reverse string is : %s",s);

}
