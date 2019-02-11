# include <stdio.h>
int c[15] ;
int m,sum = 0;

void a(int n)
{
	if(n==m)
	{
		for(int i=0;i<n;++i)
		{
			printf("%d %d\n",i,c[i]);
		}
		printf("\n");
		sum++;
	}
	else
	{
		for(int i=0;i<m;++i)
		{
			int key = 0;
			c[n] = i;
			for(int i=0;i<n;++i)
			{
				if(c[n]==c[i] || c[n]-n==c[i]-i || c[n]+n==c[i]+i)
					break;
				else
					++key;
			}
			if(key==n)
				a(n+1);
		}
		
	}
	
}

int main(void)
{

	scanf("%d",&m);
	a(0);
	printf("%d",sum);
	return 0;
}
