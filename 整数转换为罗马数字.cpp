#include <iostream>

using namespace std;
int main()
{
	int val;
	cin>>val;
	if(val/1000)
	{
		int ans=val/1000;
		int t = ans;
		while(ans)
		{
			cout<<'M';
			ans--;
		}
		val = val-t*1000;
	}
	
	if(val/100)
	{
		int ans=val/100;
		int t = ans;
		while(ans<4&&ans>0)
		{
			cout<<'C';
			ans--;
		}
		if(ans==4)
			cout<<"CD";
		if(ans>4&&ans<9)
		{
			cout<<'D';
			while(ans-5)
			{
				cout<<'C';
				ans--;
			}
		}
		if(ans==9)
		{
			cout<<"CM";
		}
		val=val-t*100;
	}
	
	if(val/10)
	{
		int ans=val/10;
		int t = ans;
		while(ans<4&&ans>0)
		{
			cout<<'X';
			ans--;
		}
		if(ans==4)
			cout<<"XL";
		if(ans>4&&ans<9)
		{
			cout<<'L';
			while(ans-5)
			{
				cout<<'X';
				ans--;
			}
		}
		if(ans==9)
		{
			cout<<"XC";
		}
		val=val-t*10;
	}
	
	if(val)
	{
		int ans=val;
		while(ans<4&&ans>0)
		{
			cout<<'I';
			ans--;
		}
		if(ans==4)
			cout<<"IV";
		if(ans>4&&ans<9)
		{
			cout<<'V';
			while(ans-5)
			{
				cout<<'I';
				ans--;
			}
		}
		if(ans==9)
		{
			cout<<"IX";
		}	
	}
	return 0;
}
