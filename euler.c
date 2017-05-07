//euler method
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x,float y)
{
	return (y-x)/(y+x);
}

void main()
{
	float x[10],y[10];
	int i;
	float h=0.02;
	x[0]=0;y[0]=1;

	int gap=1;

	for(i=1;i<6;i++,gap++)
		x[i]=h*gap;
	int j;
	printf("\n\n\t\tx\t\ty\n\n");

	for(j=0;j<i;j++)
	{
		if(j>0)
			y[j]=y[j-1]+h*f(x[j-1],y[j-1]);
		printf("%d\t%f\t%f\n",j,x[j],y[j]);
	}
	printf("\nSolution= %f\n", y[5]);
}