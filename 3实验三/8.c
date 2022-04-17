#include<stdio.h>
int main()
{
	char sex;
	double faHeight,moHeight,Height;
	char sports,diets;
	scanf("%c %lf %lf %c %c",&sex,&faHeight,&moHeight,&sports,&diets);
	if(sex=='M')
		Height=(faHeight+moHeight)*0.54;
	else
		Height=(faHeight*0.923+moHeight)/2;
	if(sports=='Y')
		Height*=1.02;
	if(diets=='Y')
		Height*=1.015;
	printf("%lf",Height);
	return 0;
}

