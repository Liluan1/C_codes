# include <stdio.h>
# include <string.h>
char a[10000];

int less(int p,int q)//�жϴ�p��ʼ�������Ƿ�ȴ�q��ʼ������С��������Ҫѭ���Ƚϣ�ֱ���ܱȳ���СΪֹ 
{
	int len = strlen(a);
	for(int i=0;i<len;++i)
	{
		if(a[(p+i)%len]!=a[(q+i)%len])
			return a[(p+i)%len]<a[(q+i)%len];
	}
	return 0;	
}

int main(void)
{
	int n;
	while(scanf("%s",a)==1)
	{
		int ans = 0;
		int len = strlen(a);
		for(int i=1;i<len;++i)//�����p��ʼ�����бȴ�q��ʼ������С���������жϣ��жϴ�p��ʼ�������Ƿ�ȴ�p+1��ʼ������С
		{                     //�����p��ʼ�����бȴ�q��ʼ�����д����жϴ�p+1��ʼ�����бȴ�q��ʼ������С���Դ����� 
			if(less(i,ans))
				ans = i;
		}
		for(int i = 0;i<len;++i)//�˴�һ��Ҫ����д����дΪi = ans����i<len+ans���� 
		{
			putchar(a[(ans+i)%len]);
		}
		putchar('\n');
	}
	return 0;
}
