#include<stdio.h>
int tricmp(int a,int b,int c)
{
	if(a<b)
	a=b;
	if(a<c)
	a=c;
	return a;
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",tricmp(a,b,c));
	return 0;
}

