# include <stdio.h>
void big(int n)
{
	int carry,tmp,lengh = 1;
	int a[9000] = {0,1};
	for(int i=2;i<=n;++i)
	{
		carry = 0;
		for(int j=1;j<=lengh;++j)
		{
			tmp = a[j]*i+carry;
			a[j] = tmp%10;
			carry = tmp/10;
			
			if(j==lengh&&carry)
				lengh++;
			
		}
	}
	for(int i=lengh;i>0;--i)
	{
		printf("%d",a[i]);
	}
	return ;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	big(n);
	return 0;
 } 
