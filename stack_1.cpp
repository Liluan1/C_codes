//2017年10月8日 11:34:19
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *pNext;
 } NODE,*PNODE;
 
 typedef struct Stack
 {
 	PNODE pTop;
 	PNODE pBottom;
 }STACK,*PSTACK;
 
 void init(PSTACK);
 void push(PSTACK, int);
 void traverse(PSTACK);
 bool pop(PSTACK,int *);
 void clear(PSTACK);
 
 int main(void)
 {
 	STACK s;
 	int val;
 	
 	init(&s);
 	push(&s, 1);
 	push(&s, 2);
 	push(&s, 3);
 	push(&s, 4);
 	push(&s, 5);
 	traverse(&s);
 	pop(&s,&val);
 	traverse(&s);
 	
 	return 0;
 }
 
 void init(PSTACK pS)
 {
 	pS->pTop = (PNODE)malloc(sizeof(NODE));
 	if(pS->pTop == NULL)
 	{
 		printf("分配失败\n");
 		exit(-1);
	 }
	 else
	 {
	 	pS->pBottom = pS->pTop;
	 	pS->pTop->pNext = NULL;
	 }
	 return ;
 }
 
 void push(PSTACK pS, int val)
 {
 	PNODE pNew = (PNODE)malloc(sizeof(NODE));
 	if(pNew == NULL)
 	{
 		printf("分配失败\n");
 		exit(-1);
	 }
	 else
	 {
	 	pNew->data = val;
	 	pNew->pNext = pS->pTop;
	 	pS->pTop = pNew;
	 }
	 return ;
 }
 
 void traverse(PSTACK pS)
 {
 	PNODE p = pS->pTop;
 	
 	while(p != pS->pBottom)
 	{
 		printf("%d",p->data);
 		p = p->pNext;
	 }
	 printf("\n");
	 
	 return ;
 }
 
 bool empty(PSTACK pS)
 {
 	if(pS->pBottom == pS->pTop)
 		return true;
 	else
 		return false;
 }
 
 bool pop(PSTACK pS, int *pVal)
 {
 	if(empty(pS))
 		return false;
 	else
 	{
 		*pVal = pS->pTop->data;
 		PNODE q = pS->pTop;
 		pS->pTop = q->pNext;
 		
 		free(q);
 		q = NULL;
 		
 		return true;
	}
 }
 
 void clear(PSTACK pS)
 {
 	if(empty(pS))
 		return ;
 	else
 	{
 		PNODE p = pS->pTop;
		PNODE q = NULL;
		
		while(p != pS->pBottom)
		{
			q = q->pNext;
			free(p);
			p = q;
		 } 
		 pS->pTop = pS->pBottom;
	 }
	 return ;
 }
