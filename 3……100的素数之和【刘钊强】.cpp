# include <stdio.h>
int main(void)
{
	int sum,val;

	for(int i=3;i<=150;++i)
	{
		val = 1;
		for(int j=2;j<i;++j)
		{
			if(i%j==0)
				val = 0;
		}
		if(val)
			sum += i;
	}
	 printf("%d",sum); 
	return 0;
 } 
