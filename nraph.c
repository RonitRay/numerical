#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return ((x*x*x)-(9*x*x)+18);
}

float fd(float x)
{
	return ((3*x*x)-(18*x));
}

void main()
{
	float x,xd,n,t;
	x1=1; xd=n=0;
	while(1)
	{
		printf("%1.0f %0.5f %0.5f %0.5f",n,x,f(x),fd(x));
		temp=x-(f(x)-fd(x));
		printf(" %0.5f\n", t);
		if(abs(abs(temp)-abs(xd))<0.0001)
			break;
		xd=temp;
		x=xd;
		n++;
	}
	printf("\nSolution: %f\n",xd);
}