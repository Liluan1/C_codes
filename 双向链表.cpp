#include<stdio.h>
#include<stdlib.h>
#include<malloc.h> 

struct list{
    int data;
    struct list * pre;
    struct list * next;
};

struct list l1,l2;
int SUM=1;

//��ʼ��list
void initList()
{
    l1.pre=NULL;
    l1.next=&l2;
    l2.pre=&l1;
    l2.next=NULL;
}

//�ڵ�N��λ�ò���m
int insertList(int n,int m)
{
    struct list *temp = (struct list*)malloc(sizeof(struct list));
    struct list *tp = &l1;
    
    if(n>SUM) return 1;
    for(int i=1;i<n;tp=tp->next,i++);
    temp->pre = tp;
    temp->next = tp->next;
    temp->data = m;
    list *t = tp->next;
    tp->next = temp;
    t->pre = temp;
    SUM++;
    return 0;
}

//ɾ����n��λ�õ��� 
int deleteList(int n)
{
	if(n>SUM-1)
		return 1;
	struct list *tp = &l1;
	for(int i=0;i<n;tp=tp->next,i++);
	struct list *t2 = tp->next;
	struct list *t1 = tp->pre;
	t1->next = t2;
	t2->pre = t1;
	free(tp);
	tp = NULL;
	return 0;
}

void printList()
{
    struct list temp = *(l1.next);
    for(;temp.next!=NULL;temp=*(temp.next))
    {
        printf("%d ",temp.data);
    }
    printf("\n");
}

int main()
{
    initList();
	if(insertList(1,5))
		printf("����ʧ��\n"); 
	insertList(2,3);
	insertList(3,2);
	insertList(4,1);
	insertList(2,4);
    printList();
    if(deleteList(6))
    	printf("ɾ��ʧ��\n");
    printList();
}
