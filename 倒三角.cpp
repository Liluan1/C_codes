# include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=n;i>0;--i)
	{
		
		for(int j=0;j<n-i;++j)
		{
			printf(" ");
		}
		for(int k=0;k<2*i-1;++k)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
 } 
