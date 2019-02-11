# include <stdio.h>
int main(void)
{
	const int mod = 1000000; 
	int n,f,sum=0;
	scanf("%d",&n);
	if(n>25)
		n = 25;//25之后的阶乘最后有6个零，不会影响最后六位 
	for(int i=1;i<=n;++i)
	{
		f = 1;
		for(int j=1;j<=i;++j)
		{
			f =f*j%mod;
		}
		sum=(sum+f)%mod;
	}
	printf("%d",sum);
	return 0;
 } 
