# include <stdio.h>
int m;
void ave()
{
	printf("%lf",(double)m/10);	
}

void sum()
{
	int n;
	for(int i=0;i<10;++i)
	{
		scanf("%d",&n);
		m+=n;
	}
}

int main(void)
{
	sum();
	ave();
	return 0;
}
