#include<stdio.h>
int aT[4][3];
void trans(int (*a)[4])
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			aT[j][i]=*(*(a+i)+j);
}
int main()
{
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf(" %d",&a[i][j]);
	trans(a);
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",aT[i][j]);
		putchar('\n');
	}
	return 0;
}

