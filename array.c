#include <stdio.h>
#include<string.h>
int main()
{
int A[3][3],B[3][3],C[3][3],i,j;
printf("enter 9 numbers for first matrix");
for (i=0;i<3;i++)
for (j=0;j<3;j++)
scanf("%d",&A[i][j]);
printf("enter 9 numbers for second matrix");
for (i=0;i<3;i++)
for (j=0;j<3;j++)
scanf("%d",&B[i][j]);
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
C[i][j]=B[i][j]+A[i][j];
printf("%d",C[i][j]);
}
printf("\n");
}
return 0;
}
