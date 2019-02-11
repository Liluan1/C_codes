# include <stdio.h>
int main(void)
{
	int a[6] = {1,1,1,1,1,4};//必须是有序的，无序的也可以先变有序 
	int key =0;
	for(int i=0;i<6-key;++i)
	{
		while(a[i]==a[i+1])//这里必须是while 
		{
			for(int j=i+1;j<6;++j)
			{
				a[j] = a[j+1];
			}
			++key;
		}
	}
	for(int i=0;i<6-key;++i)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
