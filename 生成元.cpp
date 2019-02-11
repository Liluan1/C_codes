# include <stdio.h>
# include <string.h>
int a[100005] = {0};
int main(void)
{
	int n;
	for(int i=0;i<100005;++i)
	{
		int x = i,y = i;
		while(x>0)
		{
			y += x%10;
			x /= 10;
		}
		if(a[y]==0 || a[y]>i)
			a[y] = i;
	}
	while(scanf("%d",&n)==1)
		printf("%d\n",a[n]);
	return 0;
 } 
