# include <stdio.h>
# include <malloc.h>

# define MaxVertexNum 50

struct node//�߱�ڵ��� 
{
	int adjvex;//�ڽӵ��� 
	struct node *next;//���� 
};

struct vnode //�����ڵ� 
{
	int vertex; //������ 
	struct node *firstedge;//�߱�ͷָ�룬 
};

struct graph
{
	vnode *adjlist;//��ʾһ���ɶ���ͱ߱�
	// ͷָ����ɵ����� 
	int n;        //ͼ�е�ǰ������ 
	int e;        //ͼ�е�ǰ���� 
};

void CreatALGraph(graph *G)
{
	int i,j,k;
	int a;
	node *s;      //����߱�ڵ� 
//	printf("�����붥�����ͱ�����\n");
	scanf("%d %d",&i,&j);
	
	G->n = i;
	G->e = j;
//	printf("�����붥���ţ�\n");
	for(i=1;i<=G->n;++i)//��������� 
	{
		scanf("%d",&a);
		G->adjlist[i].vertex = a;//���붥����Ϣ 
		G->adjlist[i].firstedge = NULL;//�߱�ͷָ����Ϊ�� 
	}
//	printf("�������������㹹�ɵı�\n"); 
	for(k=0;k<G->e;++k)
	{
		scanf("%d %d",&i,&j);//����ߣ�vi��vj���Ķ����Ӧ����� 
		s = (node *)malloc(sizeof(node));//���ɱ߱�ڵ� 
		s->adjvex = j;
		s->next = G->adjlist[i].firstedge;
		G->adjlist[i].firstedge = s;//���½ڵ�*s���붥��Vi�ı߱�ͷ�� 
	}
 } 
 
 
 int main(void)
 {
 //	freopen("input.txt","r",stdin);
 	int i,j;
 	graph *G = (graph *)malloc(sizeof(graph));
 	G->adjlist = (vnode *)malloc(sizeof(node)*MaxVertexNum);
 	CreatALGraph(G);
 	for(i=1;i<=G->n;++i)
 	{
 		while (G->adjlist[i].firstedge)
 		{
 			printf("%d->",G->adjlist[i].vertex);
 			printf("%d\n",G->adjlist[i].firstedge->adjvex);
 			G->adjlist[i].firstedge = G->adjlist[i].firstedge->next;
		 }                     
	 }
	 return 0;
 }
