#include<stdio.h>
char c[81];
int main()
{
	int i;
	gets(c);
	for(i=0;i<sizeof(c);i++)
	{
		if(c[i]<='Z'&&c[i]>='A')
		c[i]+=1;
		if(c[i]=='Z'+1)
		c[i]='A';
		if(c[i]<='z'&&c[i]>='a')
		c[i]+=1;
		if(c[i]=='z'+1)
		c[i]='a';
	}
	puts(c);
	return 0;
}

