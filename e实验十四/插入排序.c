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
	for(i=1;i<n;i++)
    {
    	int pos;
		struct stu mem;
        pos=i-1;
        mem=info[i];
        while(pos>=0&&info[pos].score<mem.score)
        {
            info[pos+1]=info[pos];
            pos--;
        }
        info[pos+1]=mem;
	}
	for(i=0;i<n;i++)
	{
		puts(info[i].name);
		printf("%d\n",info[i].score);
	}
	return 0;
}

