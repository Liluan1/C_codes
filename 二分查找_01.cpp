# include <stdio.h>
//�����������ظ�����ʱ������д����ѡ������һ�� 
int erfen(int arr[],int key,int n)
{
	int left = 0,right = n-1,mid;
	mid = (left+right)/2;
	while(left<right)//���ܼӵȺţ���left == right && arr[mid]>keyʱ��������ѭ�� 
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
