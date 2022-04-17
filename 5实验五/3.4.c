#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define random(x)(rand()%x)
int main()
{
	int num,guess=-1,counter;
	char exit='0';
	srand((int)time(0));
	num=random(100)+1;
	while(exit!='P' && exit!='p')
	{
		counter=0;
		while(guess!=num&&counter<=10)
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
				return 0;
			}
		}
		printf("Lost!");
		printf("Press P to exit or Press any other key to continue\n");
		getchar();
		scanf("%c",&exit);
	}
	return 0;
}

