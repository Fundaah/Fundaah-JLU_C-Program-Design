#include<stdio.h>
int main()
{
	int i,a[10];
	double sum=0;
	for(i=0;i<10;i++)
	{
		scanf(" %d",&a[i]);
		sum+=a[i]*1.0;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
		if(i%3==2)
		putchar('\n');
	}
	putchar('\n');
	printf("%lf",sum/10.0);
	return 0;
}

