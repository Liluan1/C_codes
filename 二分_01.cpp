# include <stdio.h>

int binserach(int arr[],int x,int len)	//���Ӷ��� logn��׼ȷ��˵��1.5logn
{
	int l = 0;
	int r = len-1;
	int mid;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(x<arr[mid])	//ʹ��С�ںŸ�������⣬����ʹ��С�ں�
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
