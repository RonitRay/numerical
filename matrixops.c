#include <stdio.h>
#include <stdlib.h>

int **a, **b, **c;
int r1, c1, r2, c2, i,j;

void set()
{
	printf("Enter dimensions of M1: \n");
	scanf("%d%d ",&r1,&c1);
	printf("Enter dimensions of M2: \n");
	scanf("%d%d ",&r2,&c2);
	printf("Mat 1 elements: \n");
	a=(int **)malloc(r1*sizeof(int *));
	b=(int **)malloc(r2*sizeof(int *));

	for(i=0;i<r1;i++)
	{
		a[i]=(int **)malloc(c1*sizeof(int));
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Mat 2 elements: \n");
	for(i=0;i<r2;i++)
	{
		b[i]=(int **)malloc(c1*sizeof(int));
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	}
}

void mat_add()
{
	c=(int **)malloc(r1*sizeof(int *));
	for (i = 0; i < r1; i++)
	{
		c[i]=(int *)malloc(sizeof(int)*d);
		for (i = 0; i < c1; i++)
			c[i][j]=a[i][j]+b[i][j];
	}
	display(c);
}

void mat_sub()
{
	c=(int **)malloc(r1*sizeof(int *));
	for (i = 0; i < r1; i++)
	{
		c[i]=(int *)malloc(sizeof(int)*d);
		for (i = 0; i < c1; i++)
			c[i][j]=a[i][j]-b[i][j];
	}
	display(c);
}

void mat_mult()
{
	int sum=0;
	if(c2!=r1)
	{
		printf("invalid\n");
		return;
	}
	c=(int **)malloc(sizeof(int*)*r1);
	for(i=0;i<r1;i++)
		c[i]=(int *)malloc(c2*sizeof(int));

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
				sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
			sum=0;
		}
	}
	display(c);
} 	

void transpose()
{
	c=(int **)malloc(c1*sizeof(int*));
	for(i=0;i<c1;i++)
		c[i]=(int *)malloc(r1*sizeof(int));
	for(i=0;i<c;i++)
		for(j=0;j<r;j++)
			c[i][j]=a[j][i];
	display(c);
}

void display(int a[][])
{
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}