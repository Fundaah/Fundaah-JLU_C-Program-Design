#include<stdio.h>
int main()
{
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf(" %d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		int temp=a[i][3];
		a[i][3]=a[i][2];
		a[i][2]=a[i][1];
		a[i][1]=a[i][0];
		a[i][0]=temp;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}	
	return 0;
}

