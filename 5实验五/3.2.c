#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define random(x)(rand()%x)
int main()
{
	int num,guess=-1,counter=0;
	srand((int)time(0));
	num=random(100)+1;
	while(guess!=num)
	{
		scanf("%d",&guess);
		counter++;
		if(guess>num)
			printf("Wrong! Too High\n");
		else if(guess<num)
			printf("Wrong! Too Low\n");
		else
		{
			printf("Right!\nYou have guessed %d time(s)",counter);
			break;
		}
	}
	return 0;
}

