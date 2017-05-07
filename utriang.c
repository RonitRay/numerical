//upper triangular
#include <stdio.h>
#include <stdlib.h>
int a[3][3];

void main()
{
	int i,j,det;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(j<i)
				a[i][j]=0;

	det=0;
	for(i=0;i<3;i++)
		det+=a[i][i];

	printf("%d", det);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\n", a[i][j]);
		printf("\n");
	}
}