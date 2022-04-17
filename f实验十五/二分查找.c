#include<stdio.h>
void mysort(int* start,int* end);
int search(int* start,int* end,int k);
int main()
{
	int i,k,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	scanf("%d",&k);
	mysort(a,a+n);
	if(search(a,a+n,k)==1)
		printf("Find it!");
	else
		printf("Cannot find it!");
	return 0;
}
void mysort(int* start,int* end)
{
	int n=end-start;
	int ln=0,rn=0,m=*start,i,l[n],r[n];
	if(n==0)
		return;
	for(i=0;i<n;i++)
	{
		if(*(start+i)<*start)
		{
			l[ln]=*(start+i);
			ln++;
		}
		if(*(start+i)>*start)
		{
			r[rn]=*(start+i);
			rn++;
		}
	}
	for(i=0;i<ln;i++)
	*(start+i)=l[i];
	for(i=ln;i<n-rn;i++)
	*(start+i)=m;
	for(i=n-rn;i<n;i++)
	*(start+i)=r[i-n+rn];
	mysort(start,start+ln);
	mysort(end-rn,end);
	return;
}
int search(int* start,int* end,int k)
{
    int m=(end-start)/2;
    if(start-end>0)
        return 0;
    else
    {
        if(*(start+m)==k)
            return 1;
        else if(*(start+m)>k)
            return search(start,start+m-1,k);
         else
            return search(start+m+1,end,k);
    }
}
