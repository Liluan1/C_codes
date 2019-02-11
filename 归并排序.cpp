# include <cstdio>
using namespace std;
int val = 0;
int a[500000];
int b[500000];
void merge_sort(int *A, int x, int y, int *T)
{
	if(y-x > 1)
	{
		int m = x+(y-x)/2;
		int p = x, q = m, i = x;
		printf("%d %d %d\n",x,m,y);
		merge_sort(A,x,m,T);
		merge_sort(A,m,y,T);

		while(p<m||q<y)
		{
			if(q>=y||(p<m && A[p]<=A[q]))
			{
				T[i++] = A[p++];
				val++;
			
			}
			else
			{
				T[i++] = A[q++];
				val++;
			}
		}
		printf("%d",val);
		for(i=x;i<y;++i)
			A[i] = T[i];
	}
}
int main(void)

{
	
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		val = 0;
		merge_sort(a,0,n,b);
		scanf("%d",&n);
	} 
	return 0;
 } 
