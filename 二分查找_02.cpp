# include <stdio.h>
//����������ȵ�ֵʱ�����ַ�����ѡ���һ�� 
int erfen(int arr[],int key,int n)
{
	int left = 0,right = n+1,mid;
	while(left<right)
	{
		mid = (left+right)/2;
		if(key<=arr[mid])//�ȺŲ���ʡ���������� 
		{
			right = mid;
		}
		else
			left = mid+1;
	/*
	���������ȡ������ѡ�����һ����ȵ�ֵ 
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
