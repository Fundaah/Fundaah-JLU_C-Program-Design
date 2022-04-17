#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x/=10;
	switch(x)
	{
		case 10:
		case 9:putchar('A');break;
		case 8:putchar('B');break;
		case 7:putchar('C');break;
		case 6:putchar('D');break;
		default:putchar('E');break; 
	}
	return 0;
}

