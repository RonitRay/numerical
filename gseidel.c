//gauss seidel
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float ar[3][4];

int main()
{
	int i,j,t1,t2,t3,s1,s2,s3;
	float x1,x2,x3;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%f",&ar[i][j]);
	x1=x2=x3=0;

	for(i=0;;i++)
	{
		t1=x1;t2=x2;t3=x3;

		x1=(ar[0][3]-ar[0][1]*x2-ar[0][2]*x3)/ar[0][0];
		x2=(ar[1][3]-ar[1][0]*x1-ar[1][2]*x3)/ar[1][1];
		x3=(ar[2][3]-ar[2][0]*x1-ar[2][1]*x2)/ar[2][2];

		if(abs(t1-s1)<0.0001 && abs(t2-s2)<0.0001 && abs(t3-s3)<0.0001)
			break;
	}
	printf("%0.2f %0.2f %0.2f\n",x1,x2,x3);
}