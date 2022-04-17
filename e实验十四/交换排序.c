#include<stdio.h>
struct stu
{
	int score;
	char name[81];
};
int main()
{
	int i,j,n;
	scanf("%d",&n);
	struct stu info[n];
	for(i=0;i<n;i++)
	{
		getchar(); 
		gets(info[i].name);
		scanf("%d",&info[i].score);
	}
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(info[i].score < info[j].score)
		{
			struct stu temp;
			temp=info[i];
			info[i]=info[j];
			info[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		puts(info[i].name);
		printf("%d\n",info[i].score);
	}
	return 0;
}

