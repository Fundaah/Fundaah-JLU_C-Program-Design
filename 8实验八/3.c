#include<stdio.h>
int Prime[8]={2,3,5,7,11,13,17,19};
int IsPrime(int x)
{
	int i;
	for(i=0;i<8;i++)
		if(x%Prime[i]==0)
			return 0;
	return 1;
}
int main()
{
	int i,counter=0;
	for(i=100;i<=500;i++)
	{
		if(IsPrime(i)==1)
		{
			printf("%d ",i);
			counter++;
		}
	}
	printf("\n%d",counter);
	return 0;
}

