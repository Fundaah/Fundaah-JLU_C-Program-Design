#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=2*(n-i);k++)
			putchar(' ');
		for(j=1;j<=i;j++)
			printf("%d ",j);
		for(j=i-1;j>=1;j--)
			printf("%d ",j);
		putchar('\n');
	}
	for(i=n-1;i>0;i--)
	{
		for(k=1;k<=2*(n-i);k++)
			putchar(' ');
		for(j=1;j<=i;j++)
			printf("%d ",j);
		for(j=i-1;j>=1;j--)
			printf("%d ",j);
		putchar('\n');
	}
	return 0;
}

