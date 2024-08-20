#include <stdio.h>

int main()
{
	char c[100],srch;
    short cnt;
	int i=0;


	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(c);


	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&srch);

	while(c[i]!='\0')
	{
		if(c[i]==srch) cnt++;
		i++;
	}


	printf("frequency of %c = %d",srch,cnt);
}
