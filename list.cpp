//2017年10月5日 12:01:46 
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node 
{
	int data;
	struct Node *pNext;
 } NODE,*PNODE;
 
 //函数声明
 PNODE create_list(void);
 void traverse_list(PNODE pHead);//遍历 
 bool is_empty(PNODE pHead);
 int lengh_list(PNODE);
 bool insert_list(PNODE pHead,int pos,int val);//插入 
 bool delete_list(PNODE pHead,int pos,int *pVal);//删除 
 void sort_list(PNODE);//排序 
 
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
	 	printf("删除成功，删除%d\n",val);
	 }
	 else
	 {
	 	printf("删除失败\n");
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
 		printf("分配失败\n");
 		exit(-1);
	 }
	 PNODE pTail = pHead;
	 pTail->pNext = NULL;//pTail永远指向最后的节点 
	 
	 printf("需要生成的链表节点的个数：len = ");
	 scanf("%d",&len);
	 
	 for(i=0;i<len;++i)
	 {
	 	printf("请输入第%d个节点的值",i+1);
	 	scanf("%d",&val);
	 	
	 	PNODE pNew = (PNODE)malloc(sizeof(NODE));//pNew是新建立的节点 
	 	if(NULL == pNew)
 		{
 		printf("分配失败\n");
 		exit(-1);
		 }
		 //使pNew赋值，pTail指向最后的节点 
		 pNew->data = val;
		 pTail->pNext = pNew;
		 pNew->pNext = NULL;
		 pTail = pNew; 
	 }
	 
	 return pHead;
 }
 
 void traverse_list(PNODE pHead)
 {
 	PNODE p = pHead->pNext;//指向第一个节点 
 	
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
 	
 	//与数组排序的实现相似，只是实现的细节不同 
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
 	
 	while(NULL!=p && i<pos-1)//使p不断前移直至指向想删除的前面一个数（pos-1） 
 	{
 		p = p->pNext;
 		++i;
	 }
	 
	 if(i>pos-1 || p == NULL)
	 	return false;
	 	
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if(NULL == pNew)
	{
		printf("内存分配失败\n");
		exit(-1);
	}
	pNew->data = val;//用pNew存放新插入的数 
	
	//使第pos个数向后退一个，将新的数放到第pos个数处 
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
	 	
	//将要删除的数保存 
	PNODE q = p->pNext;
	*pVal = q->data;
	
	//将pos+1放到pos-1后面 
	p->pNext = q->pNext;
	
	free(q);
	q = NULL;
	
	return true;
	 
 	
 }

  
