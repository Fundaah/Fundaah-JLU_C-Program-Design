#include<stdio.h>
int main()
{
	double a,b;
	char op,q;
	do{
		scanf("%lf %c %lf",&a,&op,&b);
		switch(op)
		{
			case '+':printf("%lf\n",a+b);break;
			case '-':printf("%lf\n",a-b);break;
			case '*':printf("%lf\n",a*b);break;
			case '/':printf("%lf\n",a/b);break;
			case '=':{
						if(a>=-0.0000000000001 && a<=0.0000000000001)
							printf("%lf=0\n",a);
						else
							printf("%lf!=0\n",a);
						break;
					}
		}
		printf("Do you want to continue(Y/N)?\n");
		getchar();
		scanf("%c",&q);
	}while(q=='Y');
	return 0;
}

