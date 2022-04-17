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
void reverse(list *head,int n);
void del2n(list *head,int *n);
void insert(list *head,int num);
void merge(list *head1,list *head2);
int main()
{
	char c='\0';
	printf("功能列表:\n"
		"A:输入元素数量和元素，自动建立一个单向链表\n"
		"B:输入元素数量和元素，自动建立一个单向链表，并显示单向链表中所有数据\n"
		"C:输入元素数量和元素，自动建立一个单向链表，把单向链表中元素逆置，并显示\n"
		"D:输入元素数量和元素，自动建立一个单向链表，在单向链表中删除所有的偶数元素结点，并显示\n"
		"E:输入元素数量和元素，自动建立一个有序单向链表，在有序单向链表中插入元素结点，结果仍有序，并显示\n"
		"F:输入元素数量和元素，再输入元素数量和元素，自动建立两个有序链表，并合并为一个有序链表，并显示\n"
		"G:输入元素数量和元素，自动建立一个单向链表，将一个链表按元素奇偶性分为两个链表\n"
		"Q:退出\n"
		);
	while(1)
	{
		scanf(" %c",&c);
		switch(c)
		{
			case 'A':{
				int n;
				list *head;
				scanf("%d",&n);
				head=creat(n);
				break;
			}
			case 'B':{
				int n;
				list *head;
				scanf("%d",&n);
				head=creat(n);
				print(head);
				break;
			}
			case 'C':{
				int n;
				list *head;
				scanf("%d",&n);
				head=creat(n);
				reverse(head,n);
				print(head);
				break;
			}
			case 'D':{
				int n;
				list *head;
				scanf("%d",&n);
				head=creat(n);
				del2n(head,&n);
				print(head);
				break;
			}
			case 'E':{
				int n,i,num;
				list *head;
				head=(list*)malloc(sizeof(list));
				head->next=NULL;
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					scanf("%d",&num);
					insert(head,num);
				}
				print(head);
				scanf("%d",&num);
				insert(head,num);
				print(head);
				break;
			}
			case 'F':{
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
				break;
			}
			case 'G':{
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
				print(even);
				break;
			}
			case 'Q':return 0;
			default:printf("请输入ABCDEFG或Q!\n");
		}
	}
	
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
	putchar('\n');
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
void reverse(list *head,int n)
{
	list *m,*p,*q;
	int i;
	p=head;
	m=p->next;
	q=p;
	for(i=0;i<n;i++)
	{
		p=m;
		m=p->next;
		p->next=q;
		q=p;
	}
	head->next->next=NULL;
	head->next=p;
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
