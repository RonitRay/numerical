//bisection method
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return (x*x*x)+(3*x)-5;
}

int main()
{
	float a,b,c; int i;
	for(a=0;f(a)>0;a++);
	for(b=0;f(b)<0;b++);
	i=0;

	while(abs(f(c))>=0.001)
	{
		c=(a+b)/2;
		if(f(a)*f(c)<0)
			b=c;
		else
			a=c;
		printf("%d\t%f\t%f\t%f\n",i,a,b,c);
		i++;
	}
	printf("Root= %f",c);
}