# include <stdio.h>
# include <malloc.h>

# define MaxVertexNum 50

struct node//边表节点域 
{
	int adjvex;//邻接点域 
	struct node *next;//链域 
};

struct vnode //顶点表节点 
{
	int vertex; //顶点域 
	struct node *firstedge;//边表头指针， 
};

struct graph
{
	vnode *adjlist;//表示一个由顶点和边表
	// 头指针组成的数组 
	int n;        //图中当前顶点数 
	int e;        //图中当前边数 
};

void CreatALGraph(graph *G)
{
	int i,j,k;
	int a;
	node *s;      //定义边表节点 
//	printf("请输入顶点数和边数：\n");
	scanf("%d %d",&i,&j);
	
	G->n = i;
	G->e = j;
//	printf("请输入顶点编号：\n");
	for(i=1;i<=G->n;++i)//建立顶点表 
	{
		scanf("%d",&a);
		G->adjlist[i].vertex = a;//读入顶点信息 
		G->adjlist[i].firstedge = NULL;//边表头指针置为空 
	}
//	printf("输入由两个定点构成的边\n"); 
	for(k=0;k<G->e;++k)
	{
		scanf("%d %d",&i,&j);//读入边（vi，vj）的顶点对应的序号 
		s = (node *)malloc(sizeof(node));//生成边表节点 
		s->adjvex = j;
		s->next = G->adjlist[i].firstedge;
		G->adjlist[i].firstedge = s;//将新节点*s插入顶点Vi的边表头部 
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
