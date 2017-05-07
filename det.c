//determinant standard method
#include <stdio.h>
#include <stdlib.h>
int a[3][3];
int i,j;

int main()
{
	int det=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			det+=((a[(i+1)%3][(j+1)%3]*(a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*(a[(i+2)%3][(j+1)%3]));

	printf("Determinant= %d\n", det);
}