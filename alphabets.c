#include <stdio.h>
int main()
{
	char a;
	printf("enter the character \t");
	scanf("%c",&a);
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
	{
		printf("\nvowel\n");
	}
	else
	{
		printf("\n consonant\n");
	}
	printf("press any key to exit");
	getch();
	return 0;
}
