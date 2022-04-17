#include<stdio.h>
#include<stdlib.h>
typedef struct element
{
	int val;
	struct element *next; 
} list;
void print(list *head);
void insert(list *head);
int main()
{
	int n,i;
	list *head;
	head=(list*)malloc(sizeof(list));
	head->next=NULL;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		insert(head);
	print(head);
	return 0;
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
void insert(list *head)
{
	int num;
	scanf("%d",&num);
	list *p,*node;
	p=head;
	node=(list*)malloc(sizeof(list));
	node->val=num;
	if(p->next != NULL && num < p->next->val)
	{
		node->next = p->next;
		p->next = node;
		return;
	}
	while(p->next != NULL)
	{
		p = p->next;
		if(num >= p->val && p->next != NULL && num <= p->next->val)
		{
			node->next = p->next;
			p->next = node;
			return;
		}
	}
	p->next = node;
	node->next=NULL;
}
