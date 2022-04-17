#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	switch(age)
	{
		case 2:
		case 3:printf("%d Lower Class",age);break;
		case 4:printf("%d Middle Class",age);break;
		case 5:
		case 6:printf("%d Higher Class",age);break;
	}
	return 0;
}

