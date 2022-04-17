#include<stdio.h>
#include<stdlib.h>
typedef struct element
{
	int val;
	struct element *next; 
} list;
list *creat(int n);
void print(list *head);
void divide(list *head,list *odd,list *even);
int main()
{
	int n;
	list *head,*odd,*even;
	odd=(list*)malloc(sizeof(list));
	even=(list*)malloc(sizeof(list));
	odd->next=NULL;
	even->next=NULL;
	scanf("%d",&n);
	head=creat(n);
	divide(head,odd,even);
	print(odd);
	putchar('\n');
	print(even);
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
void divide(list *head,list *odd,list *even)
{
	list *mem;
	while(head->next != NULL)
	{
		mem=head->next;
		head->next=head->next->next;
		if(mem->val %2 == 1)
		{
			mem->next=odd->next;
			odd->next=mem;
		}
		else
		{
			mem->next=even->next;
			even->next=mem;
		}
		
	}
}
