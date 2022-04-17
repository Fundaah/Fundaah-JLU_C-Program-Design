#include <stdio.h>
void main()
{ 
	int j,a[12];
	for(j=0;j<12;j++)
    	scanf("%d",a+j);
	for(j=1;j<=12;j++)
	{
    	printf("%d ",*(a+j-1));
    	if(j%4==0)
			printf("\n");
 	}
}

