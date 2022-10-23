#include <stdio.h>
#include<conio.h>
int main()
{
	char num[20],i;
	for (i='a';i<='z';i++)
	{
	num[i]=i;
	printf("%c \n",num[i]);
		getch();
}
}
