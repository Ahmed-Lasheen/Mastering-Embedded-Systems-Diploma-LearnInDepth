#include <stdio.h>

void main()
{
	char n;
	printf("enter a character");
	 fflush(stdin);fflush(stdout);
     scanf("%c",&n);

     if ((n>'a'&&n<'z') || (n>'A'&&n<'Z'))
    	 printf("%c is an alphabet",n);
     else
    	 printf("%c is not an alphabet",n);
}
