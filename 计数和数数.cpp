#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[33][50];
	int n;
	cin >> n;
	a[0][0] = '1';
	for (int i = 1; i<n; ++i)
	{
		int val = 1, k = 0;
		for (int j = 0; j<6; ++j)
		{
			if (a[i - 1][j] == a[i - 1][j + 1])
				val++;
			else
			{
				a[i][k] = val+48;
				a[i][k + 1] = a[i - 1][j];
				k+=2;
				val = 1;
			}
		}
	}
	for (int i = 0; i<6; ++i)
		cout << a[n - 1][i];
	return 0;
}
