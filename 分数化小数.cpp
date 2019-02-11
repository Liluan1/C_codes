# include <stdio.h>
int main(void)
{
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	printf("%d.",a/b);
	for(int i=0;i<c-1;++i)
	{
		a = a%b*10;
		printf("%d",a/b);
	}
	a = a%b*10;
	if(a%b*10/b>=5)
		printf("%d",a/b+1);
	else
		printf("%d",a/b);
	return 0;
}
