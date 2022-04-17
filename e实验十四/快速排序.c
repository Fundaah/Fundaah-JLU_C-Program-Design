#include<stdio.h>
#include<string.h>
struct stu
{
	int score;
	char name[81];
};
void mysort(struct stu* start,struct stu* end);
int main()
{
	int i,n;
	scanf("%d",&n);
	struct stu info[n];
	for(i=0;i<n;i++)
	{
		getchar(); 
		gets(info[i].name);
		scanf("%d",&info[i].score);
	}
	mysort(info,info+n);
	for(i=0;i<n;i++)
	{
		puts(info[i].name);
		printf("%d\n",info[i].score);
	}
	return 0;
}
void mysort(struct stu* start,struct stu* end)
{
	int n=end-start;
	int ln=0,rn=0,mn=0,i;
	struct stu l[n],r[n],m[n];
	if(n==0)
		return;
	for(i=0;i<n;i++)
	{
		if((start+i)->score > start->score)
		{
			l[ln]=*(start+i);
			ln++;
		}
		if((start+i)->score < start->score)
		{
			r[rn]=*(start+i);
			rn++;
		}
		if((start+i)->score == start->score)
		{
			m[mn]=*(start+i);
			mn++;
		}
	}
	for(i=0;i<ln;i++)
	*(start+i)=l[i];
	for(i=ln;i<n-rn;i++)
	*(start+i)=m[i-ln];
	for(i=n-rn;i<n;i++)
	*(start+i)=r[i-n+rn];
	mysort(start,start+ln);
	mysort(end-rn,end);
	return;
}
