#include<stdio.h>
int main()
{
	int a[11],len=10,x,i,j;
	for(i=0;i<len;i++)
		scanf(" %d",&a[i]);
	for(i=0;i<len-1;i++)
		for(j=i+1;j<len;j++)
			if(a[i]<a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
	putchar('\n');
	scanf(" %d",&a[10]);
	len++;
	for(i=0;i<len-1;i++)
		for(j=i+1;j<len;j++)
			if(a[i]<a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
	return 0;
}

