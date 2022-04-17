#include<stdio.h>
#include<string.h>
struct stu
{
	char no[81];
	char name[81];
	float sub1;
	float sub2;
	float sub3;
	float average;
};
int main()
{
	printf("Press A to write\n"
	       "Press B to sort\n"
		   "Press C to search\n");
	int i;
	char a;
	FILE *STU1,*STU2;	
	a=getchar();
	switch(a){
		case 'A':{
			STU1=fopen("STU1.DAT","w");
			for(i=0;i<5;i++)
			{
				struct stu info;
				getchar();
				gets(info.no);
				gets(info.name);
				scanf("%f %f %f",&info.sub1,&info.sub2,&info.sub3);
				info.average=(info.sub1+info.sub2+info.sub3)/3.0;
				fprintf(STU1,"%s\n%s\n%3.1f\n%3.1f\n%3.1f\n%3.2f\n",info.no,info.name,info.sub1,info.sub2,info.sub3,info.average);
			}
			fclose(STU1);
			break;
		}
		case 'B':{
			STU1=fopen("STU1.DAT","r");
			STU2=fopen("STU2.DAT","w");
			struct stu info[5];
			for(i=0;i<5;i++)
			{
				fgets(info[i].no,8,STU1);
				fgets(info[i].name,8,STU1);
				fscanf(STU1,"%f %f %f %f\n",&info[i].sub1,&info[i].sub2,&info[i].sub3,&info[i].average);
			}
			int j;
			for(i=0;i<5;i++)
			for(j=i+1;j<5;j++)
			{
				if(info[i].average < info[j].average)
				{
					struct stu temp=info[i];
					info[i]=info[j];
					info[j]=temp;
				}
			}
			for(i=0;i<5;i++)
			{
				fprintf(STU2,"%s%s%3.1f\n%3.1f\n%3.1f\n%3.2f\n",info[i].no,info[i].name,info[i].sub1,info[i].sub2,info[i].sub3,info[i].average);	
			}
			fclose(STU1);
			fclose(STU2);
			break;
		}
		case 'C':{
			STU2=fopen("STU2.DAT","r");
			char search[81];
			getchar();
			gets(search);
			search[6]='\n';
			search[7]='\0';
			for(i=0;i<5;i++)
			{
				struct stu info;
				fgets(info.no,8,STU2);
				fgets(info.name,8,STU2);
				fscanf(STU2,"%f %f %f %f\n",&info.sub1,&info.sub2,&info.sub3,&info.average);
				if(strcmp(info.no,search)==0)
				{
					printf("%s%s%3.1f\n%3.1f\n%3.1f\n%3.2f\n",info.no,info.name,info.sub1,info.sub2,info.sub3,info.average);
					fclose(STU2);
					return 0;	
				}
			}
			printf("No infomation!\n");
			fclose(STU2);
			break;
		}
	} 
	return 0;
}
