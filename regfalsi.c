//regula falsi
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return (x*x*x)+(2*x)-2;
}

int main()
{
	float x1,x2,h,nx,int i;
	for(x1=0;f(x1)>0;x1++);
	for(x2=0;f(x2)<0;x2++);
	i=0;

	while(abs(f(nx))>=0.001)
	{
		h=f(x2)/(f(x2)-f(x1))*(x2-x1);
		nx=h2-h;
		if(f(x1)*f(nx)<0)
			x2=nx;
		else
			x1=nx;

		i++;
	}
	printf("Root= %f\n", nx);
}