#include<stdio.h>
int add(int *a,int *b);
void swap(int *a,int *b);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=add(&a,&b);
	printf("%d\n",sum);
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
int add(int *a,int *b)
{
	return (*a)+(*b);
}
void swap(int *a,int *b)
{
	int p;
	p=*a;
	*a=*b;
	*b=p;
}

