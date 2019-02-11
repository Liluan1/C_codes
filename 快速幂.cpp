# include <cstdio>
using namespace std;

int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		int b;
		scanf("%d",&b);
		long long w = b;
		long long ans = 1;
		while (b>0)
		{
			if(b%2==1)
				ans = (ans*w)%10;
			b = b/2;
			w = (w*w)%10;
		}
		printf("%lld\n",ans);
	}
	return 0;
 } 
