#include <stdio.h>
int main()
{
	char a;
	printf("enter the character \t");
	scanf("%c",&a);
	if(a>='a'&&a<='z')
	printf("\nvowel");
	else
	printf("\n not");
	return 0;
}
