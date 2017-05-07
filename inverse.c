#include <stdio.h>
#include <stdlib.h>
int a[3][3], adj[3][3], t[3][3];
void main()
{
	int i,j,det=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	i=0;
	for(j=0;j<3;j++)
		det+=((a[(i+1)%3][(j+1)%3]*(a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*(a[(i+2)%3][(j+1)%3]));

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			adj[i][j]=((a[(i+1)%3][(j+1)%3]*(a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*(a[(i+2)%3][(j+1)%3]));

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			t[i][j]=a[j][i];
			adj[i][j]=t[i][j]/det;
		}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\n", adj[i][j]);
		printf("\n");
	}
}