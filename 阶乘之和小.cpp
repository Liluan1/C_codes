# include <stdio.h>
int j(int n)
{
	if(n==1)
		return 1;
	else
		return j(n-1)*n;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",j(n));
	return 0;
 } 
