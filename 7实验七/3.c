#include<stdio.h>
int main()
{
	int x,i,len,counter=0;
	int a[]={1,2,2,3,2,1,1,4,5,5,5,8};
	scanf("%d",&x);
	len=sizeof(a)/4;
	for(i=0;i<len;i++)
	{
		if(a[i]!=x)
		printf("%d ",a[i]);
		else
		counter++;
	}
	if(counter==0)
	printf("\nNot be included");
	return 0;
}

