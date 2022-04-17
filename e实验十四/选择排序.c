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
    for(i=0;i<n;i++)
    {
    	int maxn=-1,max;
		max=-1;
		for(j=i;j<n;j++)			
    		if (info[j].score > max) 
			{
				max=info[j].score;
				maxn=j;
			}	
      	struct stu temp;
      	temp=info[i];
      	info[i]=info[maxn];
      	info[maxn]=temp;
    }
	for(i=0;i<n;i++)
	{
		puts(info[i].name);
		printf("%d\n",info[i].score);
	}
	return 0;
}

