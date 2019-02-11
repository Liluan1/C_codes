# include <stdio.h>
int main(void)
{
	int R,Y;
	float M;
	scanf("%d %f %d",&R,&M,&Y);
	
	for(int i=0;i<Y;i++)
	{
		M*=(1+0.01*R);
	}
	int m = (int)M;
	printf("%d",m);
	
	return 0;
}
