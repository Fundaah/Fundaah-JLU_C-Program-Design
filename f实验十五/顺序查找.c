#include<stdio.h>
int main()
{
	int i,k,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("Find it!");
			return 0;
		}
	}
	printf("Cannot find it!");
	return 0;
}

