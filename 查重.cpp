# include <stdio.h>
int main(void)
{
	int a[6] = {1,1,1,1,1,4};//����������ģ������Ҳ�����ȱ����� 
	int key =0;
	for(int i=0;i<6-key;++i)
	{
		while(a[i]==a[i+1])//���������while 
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
