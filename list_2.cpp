//2017年10月7日 11:45:52 
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *pNext;
 } NODE, *PNODE;
 
 PNODE create_list(void);
 void traverse_list(PNODE pHead);
 bool is_empty(PNODE pHead);
 int length_list(PNODE);
 bool insert_list(PNODE pHead, int pos,int val);
 bool delete_list(PNODE pHead,int pos,int *pVal);
 void sort_list(PNODE);
 
 int main(void)
 {
 	PNODE pHead = NULL;
 	int val;
 	
 	pHead = creat_list();
 	traverse_list(pHead);
 	
 	
 	
 }
 
 PNODE create_list(void)
 {
 	int len;
 	int i;
 	int val;
 	
 	PNODE pHead = (PNODE)malloc(sizeof(NODE));
 	if(pHead == NULL)
 	{
 		printf("内存分配失败\n");
		 exit(-1); 
	 }
	 PNODE pTail = pHead;
	 pTail->pNext = NULL;
	 
	 printf("生成节点的个数为");
	 scanf("%d",&len);
	 
	 for(i=0;i<len;++i)
	 {
	 	printf("输入第%d个节点的值",i+1);
		scanf("%d",&val);
		 
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		if(pNew->pNext == NULL)
		{
			printf("分配失败\n");
			exit(-1);
		  }  
		  pNew->data = val;
		  pTail->pNext = pNew;
		  pNew->pNext = NULL; 
		  pTail = pNew;
	  } 
	  return pHead;
 }
 
 void traverse_list(PNODE pHead)
 {
 	PNODE p = pHead;
 	
 	while(p != NULL)
 	{
 		printf("%d",p->data);
		p = p->pNext;
	 }
	 printf("\n");
	 
	 return ;
 }
 
 bool is_empty(PNODE pHead)
 {
 	if(pHead->pNext == NULL)
 		return true;
 	else
 		return false;
 }
 
 int length_list(PNODE pHead)
 {
 	int len = 0;
 	PNODE p = pHead;
 	while(p->pNext != NULL)
 	{
 		i++;
 		p = p->pNext;
	 }
	 return len;
 }
 
 void sort_list(PNODE pHead)
 {
 	int i,j,t;
 	int len = length_list(pHead);
 	PNODE p, q;
 	
 	for(i=0,p=pHead->pNext;i<len-1;p=p->pNext,i++)
 	{
 		for(j=i+1,q=p->pNext;j<len;p=p->pNext,j++)
 		{
 			if(p->data > q->pNext)
 			{
 				t = p->pNext;
 				p->pNext = q->pNext;
 				q->pNext = t;
			 }
		 }
	 }
	 
	 return ;
 	
 }
 
 bool insert_list(PNODE pHead,int pos,int val)
 {
 	int i = 0;
 	PNODE p = pHead;
 	
 	while(p!=NULL && i<pos-1)
 	{
 		p = p->pNext;
 		++i;
	 }
	 
	 if(i>pos-1 || p == NULL)
	 {
	 	return false;
	 }
	 
	 PNODE pNew = (PNODE)malloc(NODE);
	 if(pNew == NULL)
	 {
	 	printf("分配失败\n");
	 	exit(-1);
	 }
	 
	 pNew->data = val;
	 
	 PNODE q = p->pNext;
	 p->pNext = pNew;
	 pNew->pNext = q;
	 
	 return true;
	 
	 
 }
 
 bool delete_list(PNODE pHead,int pos,int *pVal)
 {
 	int i = 0;
 	PNODE p = pHead;
 	
 	while(p!=NULL && i<pos-1)
	 {
	 	p = p->pNext;
	 	i++;
 		
	 }
	 
	 if(i>pos-1 || p->pNext == NULL)
	 {
	 	return false;
	 }
	 
	 PNODE q = p->pNext;
	 *pVal = q->data;
	 
	 p->pNext = q->pNext;
	 
	 free(q);
	 q = NULL;
	 
	 return true;
 }
