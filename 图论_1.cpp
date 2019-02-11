# include <cstdio>
# include <malloc.h>
using namespace std;
const int MAXN = 50;
int a[MAXN]; 

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
	int n,e;
	vnode *adjlist;
};

void createalgraph(graph *G)
{
	int i,j,k,l;
	scanf("%d%d",&i,&j);
	G->n = i;
	G->e = j;
	for(i=1;i<=G->n;++i)
	{
		G->adjlist[i].vertex = i;
		G->adjlist[i].firstedge = NULL;
	}
	for(j=1;j<=G->e;++j)
	{
		scanf("%d%d%d",&i,&k,&l);
		node *s = new node;
		s->weight = l;
		s->adjvex = k;
		s->next = G->adjlist[i].firstedge;
		G->adjlist[i].firstedge = s;
	}
}
void DFS(graph *G,int n)
{
	a[n] = 1;
	node *w = G->adjlist[n].firstedge;
	while(w)
	{
		if(!a[w->adjvex])
		{
			printf("%d->%d %d",n,w->adjvex,w->weight);
			DFS(G,w->adjvex);
		}
		w = w->next;
	}
}


int main(void)
{
//	freopen("input.txt","r",stdin); 
	graph *G = new graph;
//	G->adjlist = (vnode *)malloc(sizeof(node)*MAXN);
	G->adjlist = new vnode[MAXN];
	createalgraph(G);
	DFS(G,1);
/*	for(int i=1;i<=G->n;++i)
	{
		while(G->adjlist[i].firstedge)
		{
			printf("%d->%d %d\n",G->adjlist[i].vertex,G->adjlist[i].firstedge->adjvex,G->adjlist[i].firstedge->weight);
			G->adjlist[i].firstedge = G->adjlist[i].firstedge->next;
		}
	}*/ 
	return 0;
}
