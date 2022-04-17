#include<stdio.h>
#include<stdlib.h>
typedef struct element
{
	int val;
	struct element *next; 
} list;
list *creat(int n);
void print(list *head);
void reverse(list *head,int n);
int main()
{
	int n;
	list *head;
	scanf("%d",&n);
	head=creat(n);
	reverse(head,n);
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
void reverse(list *head,int n)
{
	list *m,*p,*q;
	int i;
	//head��ʼ 
	p=head;//����ַ 0
	m=p->next;//��һ����ַ��head����һ�� 1
	q=p;//��һ����ַ��0 
	for(i=0;i<n;i++)
	{
		p=m;//�ߵ���һ����ַ 1 2
		m=p->next;//������һ����ַ 2 3
		p->next=q;//����ַָ����һ����ַ 0
		q=p;//��һ����ַ��Ϊ 1 
	}
	head->next->next=NULL;
	head->next=p;
}
