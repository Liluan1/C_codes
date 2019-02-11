# include <stdio.h>
int findpos(int *a,int low,int high);
void quicksort(int *a,int low,int high)
{
	int pos;
	if(low<high)
	{
		pos = findpos(a,low,high);
		quicksort(a,low,pos-1);
		quicksort(a,pos+1,high);
	}
	
}
int findpos(int *a,int low,int high)
{
	int val = a[low];
	while(low<high)
	{
		while(low<high&&a[high]>=val)
			high--;
		a[low] = a[high];
		while(low<high&&a[low]<=val)
			low++;
		a[high]= a[low];	
	}
	a[low] = val;
	return high;
}



int main(void)
{
	int a[6] = {1,23,4,234,45,53};
	quicksort(a,0,5);
	for(int i=0;i<6;++i)
		printf("%d  ",a[i]);
	
	return 0;
 } 
