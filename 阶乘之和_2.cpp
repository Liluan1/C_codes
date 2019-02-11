# include <stdio.h>

//1£¡+2£¡+3£¡+¡­¡­+n£¡ 

int main(void)
{
	int n;
	scanf("%d",&n);
	long val = 1,sum = 0;
	for(int i=1;i<=n;++i)
	{
		val *= i;
		sum += val;
	}
	printf("%ld",sum);
	return 0;
}
