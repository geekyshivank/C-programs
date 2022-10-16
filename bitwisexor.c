#include <stdio.h>
int main()
{
	int x='A',y=65,z,a;
	z=x^y;
	a=y^z;
	printf("%d ^ %d = %d",x,y,z);
	printf("\n%d ^ %d = %d",z,y,a);
	return 0;
	
}
