# include <stdio.h>

bool check(int ,int ,int *);	
int binsearch(int *arr,int member,int len);
int main(void)
{	
	int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};

	int location ;
	int member;

	scanf("%d",&member);
	location = binsearch(arr,member,11);
	printf("%d",location);
	return 0;
}

int binsearch(int *arr,int member,int len)
{
 	int l = 0;
 	int r = len-1;
 	int mid;
	while(l<r)
	{
		mid=(l+r)/2;
		if(check(mid,member,arr))
			r=mid;
		else
			l=mid+1;
	}
	
	return mid;
}

bool check(int mid,int member,int *arr)
{
	if(arr[mid]>member)
		return true;
		
	else if(arr[mid]<member)
		return false;
}
