# include <cstdio>
using namespace std;
int BinSearch(int *A,int e,int lo,int hi)
{
	while(lo<hi)
	{
		int mi = (lo+hi)>>1;
		(e<A[mi]) ? hi=mi : lo=mi+1;
	}
	return --lo;
} 
int main(void)
{
	int a[10] = {1,2,3,4,5,5,7,8,9,10};
	printf("%d",BinSearch(a,5,0,10));
	return 0;
}
