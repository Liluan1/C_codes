# include <stdio.h>

bool IsPrime(int val)
{
	int i;
	for(i=2; i<val; ++i)
	{
		if(val%i == 0)
			break;
	}
	if(i == val)
		return true;
	else
		return false;
}



int main(void)
{
	int m, p;
	printf("请输入您要辨别是否为素数的数字：");
	scanf("%d",&m);
	if(IsPrime(m))
		printf("是素数\n");
	else
	{
		printf("不是素数\n");
		printf("可以被以下数字整除\n");
		for(p=2; p<m; ++p)
		{
			if(m%p == 0)
				printf("%d\n",p);
			
		}
	}
	return 0;
}
//2017-7-30 20:56:25