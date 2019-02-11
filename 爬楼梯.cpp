#include <iostream>
using namespace std;

int f(int n)
{
	int s1=0,s2=1,t;
	for(int i=0;i<=n;++i)
	{
		t=s2;
		s2+=s1;
		s1=t;
	}
	return s1;
}
/*
void f(int n)
{
	if(n==0)
	{
		sum++;
		return ;
	}
	if(n>=1)		
		f(n-1);
	if(n>=2)
		f(n-2);
	return ; 
}
*/
int main()
{
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
