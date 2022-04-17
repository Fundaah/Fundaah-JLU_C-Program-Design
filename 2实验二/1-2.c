#include <stdio.h>
void main()
{ 
	short int a,b;
 	float d,e;
	char c1,c2;
 	double f,g;
 	long m,n;
 	unsigned short int p,q;
 	a=61;b=62;
	c1=a;c2=b;
	f=3157.890121;g=0.123456789;
	d=f;e=g;
	p=a=m=50000;q=b=n=-60000;
 	m=50000;n=-60000;
 	p=32768;q=40000;
	printf("a=%hd,b=%hd\nc1=%c,c2=%c\nd=%15.6f,e=%15.12f\n",a,b,c1,c2,d,e);
	printf("f=%f,g=%f\nm=%ld,n=%ld\np=%hd,q=%hd\n",f,g,m,n,p,q);
}

