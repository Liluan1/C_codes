# include <stdio.h>

int binserach(int arr[],int x,int len)	//复杂度是 logn，准确的说是1.5logn
{
	int l = 0;
	int r = len-1;
	int mid;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(x<arr[mid])	//使用小于号更便于理解，尽量使用小于号
		{
			r = mid-1;
		}
		else if(arr[mid]<x)
		{
			l = mid+1;
		}
		else
			return mid;
	}
}

int main(void)
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
	int location;
	int member;
	scanf("%d",&member);
	location = binserach( arr,member,11);
	printf("%d",location);
	return 0;
}
