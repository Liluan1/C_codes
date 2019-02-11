//2017��10��5�� 12:01:46 
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node 
{
	int data;
	struct Node *pNext;
 } NODE,*PNODE;
 
 //��������
 PNODE create_list(void);
 void traverse_list(PNODE pHead);//���� 
 bool is_empty(PNODE pHead);
 int lengh_list(PNODE);
 bool insert_list(PNODE pHead,int pos,int val);//���� 
 bool delete_list(PNODE pHead,int pos,int *pVal);//ɾ�� 
 void sort_list(PNODE);//���� 
 
 int main(void)
 {
 	PNODE pHead = NULL;
	 int val;
	 
	 pHead = create_list();
	 traverse_list(pHead);
	 sort_list(pHead);
	 traverse_list(pHead);
	 insert_list(pHead,4,22);
	 traverse_list(pHead);
	 if(delete_list(pHead,3,&val))
	 {
	 	printf("ɾ���ɹ���ɾ��%d\n",val);
	 }
	 else
	 {
	 	printf("ɾ��ʧ��\n");
	 }
	 traverse_list(pHead);
	 

	 
	 return 0; 
 }
 
 PNODE create_list(void)
 {
 	int len;
 	int i;
 	int val;
 	
 	PNODE pHead = (PNODE)malloc(sizeof(NODE));
 	if(NULL == pHead)
 	{
 		printf("����ʧ��\n");
 		exit(-1);
	 }
	 PNODE pTail = pHead;
	 pTail->pNext = NULL;//pTail��Զָ�����Ľڵ� 
	 
	 printf("��Ҫ���ɵ�����ڵ�ĸ�����len = ");
	 scanf("%d",&len);
	 
	 for(i=0;i<len;++i)
	 {
	 	printf("�������%d���ڵ��ֵ",i+1);
	 	scanf("%d",&val);
	 	
	 	PNODE pNew = (PNODE)malloc(sizeof(NODE));//pNew���½����Ľڵ� 
	 	if(NULL == pNew)
 		{
 		printf("����ʧ��\n");
 		exit(-1);
		 }
		 //ʹpNew��ֵ��pTailָ�����Ľڵ� 
		 pNew->data = val;
		 pTail->pNext = pNew;
		 pNew->pNext = NULL;
		 pTail = pNew; 
	 }
	 
	 return pHead;
 }
 
 void traverse_list(PNODE pHead)
 {
 	PNODE p = pHead->pNext;//ָ���һ���ڵ� 
 	
 	while(p != NULL)
 	{
 		printf("%d  ",p->data);
 		p = p->pNext;
	 }
	 printf("\n");
	 
	 return;
 }
 
 bool is_empty(PNODE pHead)
 {
 	if(NULL == pHead->pNext)
 		return true;
 	else
 		return false;
 		
 }
 
 int length_list(PNODE pHead)
 {
 	PNODE p = pHead->pNext;
 	int len = 0;
 	
 	while(p != NULL)
 	{
 		++len;
 		p = p->pNext;
	 }
	 
	 return len;
	 
 }
 
 void sort_list(PNODE pHead)
 {
 	int i,j,t;
 	int len = length_list(pHead);
 	PNODE p,q;
 	
 	//�����������ʵ�����ƣ�ֻ��ʵ�ֵ�ϸ�ڲ�ͬ 
 	for(p=pHead->pNext,i=0;i<len-1;i++,p=p->pNext)
 	{
 		for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext)
 		{
 			if(p->data > q->data)
 			{
 				t = p->data;
 				p->data = q->data;
 				q->data = t;
			 }
		 }
	 }
	 
	 return ;
 }
 
 bool insert_list(PNODE pHead,int pos,int val)
 {
 	int i = 0;
 	PNODE p = pHead;
 	
 	while(NULL!=p && i<pos-1)//ʹp����ǰ��ֱ��ָ����ɾ����ǰ��һ������pos-1�� 
 	{
 		p = p->pNext;
 		++i;
	 }
	 
	 if(i>pos-1 || p == NULL)
	 	return false;
	 	
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if(NULL == pNew)
	{
		printf("�ڴ����ʧ��\n");
		exit(-1);
	}
	pNew->data = val;//��pNew����²������ 
	
	//ʹ��pos���������һ�������µ����ŵ���pos������ 
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
 		++i;
 		p = p->pNext;
	 }
	 
	if(i>pos-1 || p->pNext == NULL)
	 	return false;
	 	
	//��Ҫɾ���������� 
	PNODE q = p->pNext;
	*pVal = q->data;
	
	//��pos+1�ŵ�pos-1���� 
	p->pNext = q->pNext;
	
	free(q);
	q = NULL;
	
	return true;
	 
 	
 }

  
