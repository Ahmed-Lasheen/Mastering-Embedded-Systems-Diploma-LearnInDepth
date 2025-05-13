#include <stdio.h>

int main()
{
	char c[100];
	short i=0;

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(c);

	while(c[i]!='\0')
	{
		i++;
	}

    printf("length of string: %d",i);

}
