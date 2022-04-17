#include<stdio.h>
struct stu
{
	int num;
	char name[81];
	double sub[3];
}l[5];
void input();
double average(int subn);
int max();
int main()
{
	int i,best;
	input();
	for(i=0;i<3;i++)
	{
		double a;
		a=average(i);
		printf("科目%d的平均分为%lf\n",i+1,a);
	}
	best=max();
	printf("第一名学号：%d\n第一名姓名：",l[best].num);
	puts(l[best].name);
	printf("第一名成绩：%lf %lf %lf",l[best].sub[0],l[best].sub[1],l[best].sub[2]);
	return 0;
}
void input()
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&l[i].num);
		getchar();
		gets(l[i].name);
		scanf(" %lf %lf %lf",&l[i].sub[0],&l[i].sub[1],&l[i].sub[2]);
	}
}
double average(int subn)
{
	double sum=0;
	int i;
	for(i=0;i<5;i++)
		sum+=l[i].sub[subn];
	return sum/5.0;
}
int max()
{
	int i,j,best;
	double m;
	for(i=0;i<5;i++)
	{
		double s=0;
		for(j=0;j<3;j++)
		{
			s+=l[i].sub[j];
			if(s>m)
			{
				m=s;
				best=i;
			}
		}
	}
	return best;
}

