#include<stdio.h>
int strcomp(char *s,char *t);
int main()
{
	char a[81],b[81],c[81],d[81];
	char *p;
	gets(a);
	gets(b);
	gets(c);
	gets(d);
	p=a;
	if(strcomp(p,b)==1)
	p=b;
	if(strcomp(p,c)==1)
	p=c;
	if(strcomp(p,d)==1)
	p=d;
	puts(p);
	return 0;
}
int strcomp(char *s,char *t)
{
	int i=0; 
	while(1)
	{
		if(*(s+i)=='\0' && *(t+i)=='\0')
			return 0;
		if(*(s+i)>*(t+i))
			return 1;
		if(*(s+i)<*(t+i))
			return -1;
		i++;
	}
}

