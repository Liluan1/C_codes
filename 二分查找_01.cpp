# include <stdio.h>
//当数组中有重复的数时，这种写法会选择其中一个 
int erfen(int arr[],int key,int n)
{
	int left = 0,right = n-1,mid;
	mid = (left+right)/2;
	while(left<right)//不能加等号，当left == right && arr[mid]>key时会陷入死循环 
	{
		if(arr[mid]>key)
		{
			right = mid;
		}
		else if(arr[mid]<key)
		{
			left = mid+1;
		}
		else
		{
			return arr[mid];
		}
		mid = (left+right)/2;
	}
	return -1;
}
int main(void)
{
	int n = 11;
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
	int val = erfen(arr,7,n);
	printf("%d",val); 
	return 0;
 } 
