//gauss elimination
#include <stdio.h>
#include <stdlib.h>
float a[3][4];
float x,y,z;
void main()
{
	int i,j;
	float fact;
	printf("First eqn coeffs: ");
	scanf("%f%f%f%f",&a[0][0],&a[0][1],&a[0][2],&a[0][3]);
	printf("Second eqn coeffs: ");
	scanf("%f%f%f%f",&a[1][0],&a[1][1],&a[1][2],&a[1][3]);
	printf("Third eqn coeffs: ");
	scanf("%f%f%f%f",&a[2][0],&a[2][1],&a[2][2],&a[2][3]);
	
	fact=a[1][0]/a[0][0];
	for(j=0;j<4;j++)
		a[1][j]-=(a[0][j]*fact);

	fact=a[2][0]/a[0][0];
	for(j=0;j<4;j++)
		a[2][j]-=(a[2][j]*fact);

	fact=a[2][1]/a[1][1];
	for(j=0;j<4;j++)
		a[2][j]-=(a[2][j]*fact);

	z=a[2][3]/a[2][2];
	y=(a[1][3]-z*a[1][2])/a[1][1];

	printf("\tx=0.2f\n",x);
	printf("\ty=0.2f\n",y);
	printf("\tz=0.2f\n",z);
}