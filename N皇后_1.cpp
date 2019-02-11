# include <stdio.h>
int c[15] ;
int m,sum = 0;

bool place(int n)
{
	for(int i=0;i<n;++i)
	{
		if(c[n]==c[i] || c[n]-n==c[i]-i || c[n]+n==c[i]+i)
			return false;
	}
	return true;
}

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
			c[n] = i;		
			if(place(n))
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
