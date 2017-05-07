//simpson's 1/3 method
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return x*2;
}
void main()
{
	float n,a,b;
	float s=0.0;
	float h;
	int i,j;
	printf("Limits: ");
	scanf("%f%f",&a,&b);
	printf("n: ");
	scanf("%f",&n);
	h=(b-a)/n;
	float x[10],y[10];

	x[0]=a;
	for(i=1;;i++)
	{
		x[i]=a+i*h;
		if(x[i]==b)
			break;
	}

	for(j=0;j<=i;j++)
		y[j]=f(x[j]);

	for(j=0;j<=i;j++)
	{
		if(j==0||j==i)
			s+=y[j];
		else if(j%2!=0)
			s+=4*y[j];
		else
			s+=2*y[j];
	}
	printf("I= %f",s*h/3);
}