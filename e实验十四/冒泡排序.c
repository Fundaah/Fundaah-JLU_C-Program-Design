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
	for (i=0; i<n-1; i++) 
    for (j=0; j<n-1-i; j++) 
	{ 
    	if (info[j].score < info[j+1].score) 
		{ 
			struct stu temp;
			temp=info[j];
            info[j]=info[j+1];
            info[j+1]=temp;
        }
    }
	for(i=0;i<n;i++)
	{
		puts(info[i].name);
		printf("%d\n",info[i].score);
	}
	return 0;
}

