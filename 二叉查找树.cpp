# include <stdio.h>
# include <malloc.h>

typedef struct Node
{
	int data;
	struct Node *rchild;
	struct Node *lchild;
}NODE,*PNODE;

PNODE insert(PNODE t,int key)
{
	if(t == NULL)
	{
		t = (PNODE)malloc(sizeof(NODE));
		t->lchild = t->rchild = NULL;
		t->data = key;
		return t;
	}
	if(key<t->data)
	{
		t->lchild = insert(t->lchild,key); 
	}
	else
	{
		t->rchild = insert(t->rchild,key);
	}
}

void traver(PNODE t)
{
	if(t!=NULL)
	{
		traver(t->lchild);
		printf("%d ",t->data);
		traver(t->rchild);
	}
}

int main(void)
{
	PNODE tree = NULL;
	int a[10] = {1,5,9,6,2,4,3,0,9,8};
	for(int i=0;i<10;++i)
	{
		tree = insert(tree,a[i]);
	}
	traver(tree);
	return 0;
}
