# include <stdio.h>
void quicksort(int *a,int low,int high)
{
	
	int left = low,right = high;
	int val = a[low];
	while(low<high)
	{
		while(low<high && a[high]>val)
			--high;
		if(low<high)
			a[low++] = a[high];
		while(low<high && a[low]<val)
			++low;
		if(low<high)
			a[high--] = a[low];
	}
	
	a[low] = val;
	quicksort(a,left,low-1);
	quicksort(a,low+1,right);
}



int main(void)
{
	int a[] = {1,4,68,43,4,25,32,6,3};
	int len = sizeof(a)/sizeof(int);
	quicksort(a,0,len-1);
	for(int i=0;i<len;++i)
		printf("%d",a[i]);
	return 0;
}
