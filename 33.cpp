# include <stdio.h>
int main(void)
{
	int a[10],val,key = 1;
	for(int i=0;i<10;++i)
		scanf("%d",&a[i]);
	scanf("%d",&val);
	for(int i=0;i<10;++i)
	{
		if(a[i]==val)
		{
			key = 0;
			printf("%d\n",val);
			break;
		}
	}
	if(key)
		printf("No\n");
	return 0;
 } 
