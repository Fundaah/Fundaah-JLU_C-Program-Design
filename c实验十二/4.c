#include<stdio.h>
#include<stdlib.h>
typedef struct element
{
	int val;
	struct element *next; 
} list;
list *creat(int n);
void print(list *head);
void del2n(list *head,int *n);
int main()
{
	int n;
	list *head;
	scanf("%d",&n);
	head=creat(n);
	del2n(head,&n);
	print(head);
	return 0;
}
list *creat(int n)
{
	int i; 
	list *head,*node,*end;
	head=(list*)malloc(sizeof(list));
	end=head;
	for(i=0;i<n;i++)
	{
		node=(list*)malloc(sizeof(list));
		scanf("%d",&node->val);
		end->next=node;
		end=node;
	}
	end->next=NULL;
	return head;
}
void print(list *head)
{
	list *node;
	node=head;
	while(node->next != NULL)
	{
		node=node->next;
		printf("%d ",node->val);
	}
}
void del2n(list *head,int *n)
{
	int i;
	list *node;
	node=head->next;
	for(i=1;i<=*n;i+=2)
	{
		
		if(i+2<=*n)
		{
			node->next=(node->next)->next;
			node=node->next;
		}	
		else
		{
			node->next=NULL;
			break;
		}
	}
	*n=((*n)+1)/2;
}
