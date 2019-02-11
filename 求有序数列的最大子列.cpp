# include <stdio.h>

int zuixiaozilie(int a[], int n)
{
	int max = 0,thissum;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			thissum = 0;
			for(int k=i;k<=j;++k)
			{
				thissum += a[k];
			}
			if(thissum > max)
			{
				max = thissum;
			}
		}
	}
	return max;
}

int main(void)
{
	int val; 
	int a[] = {1,1,2,3,5,8,13,21};
	val = zuixiaozilie(a,8);
	printf("%d",val);
	return 0;
 } 
