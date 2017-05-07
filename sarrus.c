#include <stdio.h>
#include <stdlib.h>

int a[3][3];
int i,j;

int main(void)
{
	int det=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);

	i=0;
	for(j=0;j<3;j++)
	{
		det+=(a[i][j%3]*a[i+1][(j+1)%3]*a[i+2][(j+2)%3]);
		det-=a[(i+2)%3][j%3]*a[(i+4)%3][(j+1)%3]*a[(i+6)%3][(j+2)%3];
	}
	printf("Det= %d",det);
}