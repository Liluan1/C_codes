# include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=10;i<101;++i)
	{
		if(i%3==a && i%5==b && i%7==c)
		{	
			printf("%d",i);
			break;
		}
		if(i==100)
		{
			printf("no answer");
		}
			
	}
	return 0;
 } 
