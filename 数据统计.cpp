# include <stdio.h>
# define INF 1000000
int main(void)
{
	int x,n = 0,min = INF,max = -INF,s = 0;
	while(scanf("%d",&x)==1)
	{
		s += x;
		++n;
		if(x<min)
			min = x;
		if(x>max)
			max = x;
	}
	printf("%d %d %.3f",max,min,(double)s/n);
	return 0;
 } //����ʱ������س���������Ctrl+z��������س���������� 
