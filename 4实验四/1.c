#include<stdio.h>
int main()
{
	double n,sum=0;
	scanf("%lf",&n);
	while(n>0)
	{
		sum+=1.0/n;
		n--;
	}
	printf("%lf",sum);
	return 0;
}

