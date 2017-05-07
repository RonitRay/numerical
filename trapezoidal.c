//trapezoidal method
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int i=1;
	float x=1;
	float sum=0;
	float h=(5-1)/8;
	printf("%d %f %f \n",i,x,sqrt(1*x*x));
	sum+=sqrt(1+x*x);
	x+=h;

	for(i=2;i<9;i++)
	{
		printf("%d %f %f \n",i,x,sqrt(1*x*x));
		sum+=2*sqrt(1+x*x);
		x+=h;
	}
	printf("%d %f %f \n",i,x,sqrt(1*x*x));
	sum+=sqrt(1+x*x);
	printf("\nI=%f\n",(h/2)*sum);
}