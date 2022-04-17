#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<0&&x>-5)
	printf("%d",x);
	else if(x==0)
	printf("%d",x-1);
	else if(x<10&&x>0)
	printf("%d",x+1);
	else
	printf("100");
	return 0;
}

