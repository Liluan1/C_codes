# include <stdio.h>
//数组中有相等的值时，这种方法会选择第一个 
int erfen(int arr[],int key,int n)
{
	int left = 0,right = n+1,mid;
	while(left<right)
	{
		mid = (left+right)/2;
		if(key<=arr[mid])//等号不能省，否则会出错 
		{
			right = mid;
		}
		else
			left = mid+1;
	/*
	这个是向下取整，即选择最后一个相等的值 
	while(left<right)
	{
		mid = (left+right+1)/2;
		if(arr[mid]<=key)
		{
			left = mid;
		}
		else
		{
			right = mid-1;
		}
	}
	if(arr[right] != key)
		return -1;
	else
		return right;
	*/	
	}
	if(arr[left] != key)
	{
		return -1;
	}
	else
		return left;
}
int main(void)
{
	int val;
	int arr[] = {1,2,3,4,5,5,7,8,9,10};
	val = erfen(arr,5,10);
	printf("%d",val);
	return 0;
}
