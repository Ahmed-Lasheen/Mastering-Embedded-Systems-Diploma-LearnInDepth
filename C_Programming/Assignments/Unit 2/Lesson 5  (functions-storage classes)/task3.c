#include <stdio.h>
#include <string.h>


void main ()
{

	char x[50];
	printf("Enter a Sentence: ");
	fflush(stdin);fflush(stdout);
	gets(x);
	fflush(stdin);fflush(stdout);
	reverse(x);

}




void reverse (char x[])
{
	int len = strlen(x);

	    if (len == 0)
	        return;

	    printf("%c", x[len - 1]);

	    x[len - 1] = '\0';
	    reverse(x);
}
