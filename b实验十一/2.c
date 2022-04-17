#include<stdio.h>
int main()
{
	char *p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	int num,sum=0;
	scanf("%d",&num);
	for(i=0;i<3;i++)
	{
		sum+=num%10;
		num/=10;
	}
	if(sum<=12 && sum>=1)
		printf("%s",p[sum-1]);
	else
		printf("***");
	return 0;
}

