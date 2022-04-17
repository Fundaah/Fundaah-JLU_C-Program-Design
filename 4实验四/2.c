#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=15;i++)
	{
		if(7*i+56==105)
		printf("%d %d %d %d %d %d %d",i,i+1,i+3,i+6,i+10,i+15,i+21);
		if(7*i+56>105)
		break;
	}
	return 0;
}

