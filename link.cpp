#include<cstdio>
#define N 100000
#define M 100000

struct Link{
	int w,to,next;
}l[M+5];

int n,m,h[N+5];

void linking(int len,int a,int b,int c)
{
	++len;
	l[len].next=h[a]; h[a]=len; l[len].to=b; l[len].w=c;
	return;
}

void write(int x)
{
	printf("%d\n",x);
	for(int i=h[x];i;i=l[i].next)
		printf("%d %d\n",l[i].to,l[i].w);
	printf("\n");
	return;	
}

int main()
{ 
	freopen("input.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int a,b,c,i=0;i<m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		linking(i,a,b,c);
	}
	for(int i=1;i<=n;i++)
		write(i);
	return 0;
}
