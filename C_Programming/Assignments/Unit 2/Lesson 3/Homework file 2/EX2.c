#include <stdio.h>

void main ()
{
	char n;
	printf("enter an alphabet :");
	fflush(stdin);fflush(stdout);
    scanf("%c",&n);

    switch(n)
    {
    case 'a': {printf("a is a vowel"); break;}
    case 'e': {printf("e is a vowel"); break;}
    case 'i': {printf("i is a vowel"); break;}
    case 'o': {printf("o is a vowel"); break;}
    case 'u': {printf("u is a vowel"); break;}
    default : {printf("%c is a consonant",n); break;}
    }
}
