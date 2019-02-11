# include <stdio.h>
int main(void)
{
	int a[11][4];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;++i)
	{
		scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
	}
	for(int i=0;i<m;++i)
	{
		int b,c,key = 0;
		scanf("%d %d",&b,&c);
		for(int j=n;j>0;--j)
		{
			if(a[j][0]<b&&b<a[j][2]&&a[j][1]<c&&c<a[j][3])
			{
				key = 1;
				printf("%d\n",j);
				int *p = a[j];
				for(int k=j+1;k<=n;++k)
				{
					a[k-1] = a[k];
				}
				a[n] = p;
			}
		}
		if(key==0)
			printf("ignored\n");
	}
	return 0;
 } 
