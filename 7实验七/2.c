#include<stdio.h>
#include<string.h>
int main()
{
	char s2[81],s1[81];
	gets(s2);
	int lenS2=strlen(s2);
	int i;
	for(i=0;i<=lenS2;i++)
	{
		s1[i]=s2[i];
		if(s2[i]=='\0')
		break;
	}
	puts(s1);
	return 0;
}

