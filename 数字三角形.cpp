# include <iostream>
using namespace std;
int arr[101][101];
int *maxsum;
int main(void)
{
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	maxsum = arr[n];
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=i;++j)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=n-1;i>=1;--i)
	{
		for(int j=1;j<=i;++j)
		{
			maxsum[j] = max(maxsum[j],maxsum[j+1])+arr[i][j];
		}
	}
	cout<<maxsum[1]<<endl;
	return 0;
 } 
