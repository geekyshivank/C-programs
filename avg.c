#include <stdio.h>
int main()
{
	int mark[10];
	printf("enter marks of 10 students \t");
	int i;
	for (i=0;i<10;i++){
	scanf("%d",&mark[i]);}
	int sum=0;
	for (i=0;i<10;i++)
	sum=sum+mark[i];
	float avg=(sum)/10.0;
	printf("average of 10 marks=%f \n",avg);
	return 0;
}
