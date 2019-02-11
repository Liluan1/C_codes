# include <cstdio>
using namespace std;
int n,mod;
struct Matrix 
{
	long long a[2][2];
};

Matrix mul(Matrix A,Matrix B)
{
	Matrix ans;
	for(int i=0;i<2;++i)
		for(int j=0;j<2;++j)
		{
			ans.a[i][j] = 0;
			for(int k=0;k<2;++k)
				ans.a[i][j] += A.a[i][k]*B.a[k][j];
			ans.a[i][j]%=mod;
		}
	return ans;
}

Matrix pow(Matrix A,int a,int b,int n)
{
	Matrix ans;
	ans.a[0][0] = a;ans.a[1][1] = b;
	ans.a[0][1] = ans.a[1][0] = 0;

	while(n)
	{
		if(n%2)
			ans = mul(ans,A);
		n/=2;
		A = mul(A,A);
	}
	return ans;
}

int main(void)
{
	Matrix A,ans,B;
	mod = 1000000007;
	int a,b;
	while(scanf("%d%d%d",&a,&b,&n)!=EOF)
	{
		A.a[0][0] = A.a[0][1] = A.a[1][0] = 1;
		A.a[1][1] = 0;
		ans = pow(A,a,b,n);
		printf("%lld\n",ans.a[0][0]);
	}
	return 0;
 } 
