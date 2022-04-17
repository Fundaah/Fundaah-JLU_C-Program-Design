#include<stdio.h>
#include<string.h>
int main()
{
	char a[81],result[81];
	int len,longest=-1;
	gets(a);
	while(strcmp(a,"stop")!=0)
	{
		len=strlen(a);
		printf("%d\n",len);
		if(len>longest)
		{
			longest=len;
			strcpy(result,a);
		}
		gets(a);
	}
	puts(result);
	return 0;
}

