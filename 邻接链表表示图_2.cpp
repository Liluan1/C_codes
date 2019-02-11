# include <iostream>
# include <malloc.h>
# include <string.h>
using namespace std;
typedef struct node
{
	int weight;
	int to;
	struct node *next;
}NODE,*PNODE;

int n,m;
PNODE p,end;

void init()
{
	p = (PNODE)malloc(sizeof(NODE)*n);
	for(int i=1;i<n;++i)
	{
		p[i].next = &p[i];
		p[i].to = 0;
		p[i].weight = 0;
	}
}

void add(int a,int b,int c)
{
	PNODE q = (PNODE)malloc(sizeof(NODE));
	q->to = b;
	q->weight = c;
	q->next = p[a].next;
	p[a].next = q;
}

void DFS(int n)
{
	PNODE q = p[n].next;
	while(q)
	{
		cout<<n<<"->"<<q->to<<" "<<q->weight<<endl;
		q = q->next;
		q = NULL;
	}
}

int main(void)
{
	freopen("input.txt","r",stdin);
	cin>>n>>m;
	init();
	for(int i=1;i<=m;++i)
	{
		int a,b,c;
		cin>>a>>b>>c;
		add(a,b,c);
	}
	for(int i=1;i<=n;++i)
	{
		DFS(i);
	}
	return 0;
 } 
