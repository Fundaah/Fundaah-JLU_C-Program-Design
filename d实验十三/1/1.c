#include<stdio.h>
#include<string.h>
int main()
{
	char name[81],txt[]=".txt";
	char ch;
	gets(name);
	strcat(name,txt);
	FILE *fp=fopen(name,"r");
	while( (ch=fgetc(fp)) != EOF )
	{
        putchar(ch);
        printf("(%d)",ch);
    }
	return 0;
}

