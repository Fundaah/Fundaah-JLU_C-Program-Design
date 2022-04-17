#include<stdio.h>
int main()
{
	FILE *d1,*d2;
	d1=fopen("d1.txt","r");
	d2=fopen("d2.txt","w");
	int a[3][3];
	int b[3][3];
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		fscanf(d1,"%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		fscanf(d1,"%d",&b[i][j]);
		b[i][j]+=a[i][j];
		fprintf(d2,"%d ",b[i][j]);
		if(j%3==2)
			fputc('\n',d2);
	}
	return 0;
}

