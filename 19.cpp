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
	printf("��������Ҫ����Ƿ�Ϊ���������֣�");
	scanf("%d",&m);
	if(IsPrime(m))
		printf("������\n");
	else
	{
		printf("��������\n");
		printf("���Ա�������������\n");
		for(p=2; p<m; ++p)
		{
			if(m%p == 0)
				printf("%d\n",p);
			
		}
	}
	return 0;
}
//2017-7-30 20:56:25