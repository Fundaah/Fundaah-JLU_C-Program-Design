#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x<1)
		printf("%lf",x+3);
	else if(x>=10)
		printf("%lf",x);
	else
		printf("%lf",(2*x+10)/3);
	return 0;
}

