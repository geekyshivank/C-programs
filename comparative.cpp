#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1st no.\t");
	scanf("%d",&a);
	printf("\nenter 2nd no.\t");
	scanf("%d",&b);
	printf("\nenter 3rd no.\t");
	scanf("%d",&c);
	if((a>b)&&(a>c))
	printf("\n1st no.is greatest");
	if((a<b)&&(b>c))
	printf("\n2nd no.is greatest");
	if((c>b)&&(a<c))
	printf("\n3rd no.is greatest");
	if (a==b==c)
	printf("\nall are equal");
	return 0;
}
