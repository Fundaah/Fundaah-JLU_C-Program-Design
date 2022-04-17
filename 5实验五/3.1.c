#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define random(x)(rand()%x)
int main()
{
	int num,guess;
	srand((int)time(0));
	num=random(100)+1;
	scanf("%d",&guess);
	if(guess>num)
		printf("Wrong! Too High");
	else if(guess<num)
		printf("Wrong! Too Low");
	else
		printf("Right!");
	return 0;
}

