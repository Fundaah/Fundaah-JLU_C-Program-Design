#include<stdio.h>
#include<stdlib.h>
typedef struct element
{
	int val;
	struct element *next; 
} list;
void print(list *head);
void insert(list *head,int num);
void merge(list *head1,list *head2);//2 to 1
int main()
{
	int n,i;
	list *head1;
	head1=(list*)malloc(sizeof(list));
	head1->next=NULL;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int num;
		scanf("%d",&num);
		insert(head1,num);
	}
	list *head2;
	head2=(list*)malloc(sizeof(list));
	head2->next=NULL;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int num;
		scanf("%d",&num);
		insert(head2,num);
	}
	merge(head1,head2);
	print(head1);
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
void insert(list *head,int num)
{
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
void merge(list *head1,list *head2)
{
	list *p1,*mem;
	p1=head1;
	if(head2->next != NULL && head2->next->val < p1->next->val)
	{
		mem=head2->next->next;
		head2->next->next = p1->next;
		p1->next = head2->next;
		head2->next=mem;
	}
	while(p1->next != NULL && head2->next != NULL)
	{
		p1 = p1->next;
		if(p1->next != NULL && head2->next->val >= p1->val && head2->next->val <= p1->next->val)
		{
			mem=head2->next->next;
			head2->next->next = p1->next;
			p1->next = head2->next;
			head2->next=mem;
		}
	}
	if(p1->next == NULL && head2->next != NULL)
	p1->next = head2->next;
}
