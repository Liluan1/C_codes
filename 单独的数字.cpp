#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[505];
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i+=3)
		if(arr[i]!=arr[i+1])
		{
			cout<<arr[i];
			break;
		}
	return 0;
 } 
