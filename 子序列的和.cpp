# include <stdio.h>
int main(void)
{
	int n,m;
	
	while(scanf("%d %d",&n,&m)==2 && n && m)
	{
		double sum = 0;
		for(double i=n;i<=m;++i)
		{
			sum += 1/(i*i);
		}
		printf("%.5lf\n",sum);
	}
	return 0;
 } 
