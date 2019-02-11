# include <cstdio>
# include <malloc.h>
using namespace std;
# define MaxVertexNum 50

struct node
{
	int adjvex,weight;
	node *next;
};

struct vnode
{
	int vertex;
	node *firstedge;
};

struct graph
{
	vnode *adjlist;
	int n,e;
};

void CreatAlGraph(graph *G)
{
	int i,j,a;
	scanf("%d%d",&i,&j);
	G->n = i;
	G->e = j;
	
	for(i=1;i<=G->n;++i)
	{
		scanf("%d",&a);
		G->adjlist[i].vertex = a;
		G->adjlist[i].firstedge = NULL;
	}
	
	for(int k=0;k<G->e;++k)
	{
		scanf("%d%d%d",&i,&j,&a);
		node *s = (node *)malloc(sizeof(node));
		s->weight = a;
		s->adjvex = j;
		s->next = G->adjlist[i].firstedge;
		G->adjlist[i].firstedge = s;
	}
}

int main(void)
{
	freopen("input.txt","r",stdin);
	graph *G = (graph *)malloc(sizeof(graph));
	G->adjlist = (vnode *)malloc(sizeof(node)*MaxVertexNum);
	CreatAlGraph(G);
	for(int i=1;i<=G->n;++i)
	{
		while(G->adjlist[i].firstedge)
		{
			printf("%d->%d %d\n",G->adjlist[i].vertex,G->adjlist[i].firstedge->adjvex,G->adjlist[i].firstedge->weight);
			G->adjlist[i].firstedge = G->adjlist[i].firstedge->next;
		}
	}
	return 0;
}
