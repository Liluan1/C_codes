# include <stdio.h>
# include <string.h>
char a[10000];

int less(int p,int q)//判断从p开始的序列是否比从q开始的序列小，所以需要循环比较，直至能比出大小为止 
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
		for(int i=1;i<len;++i)//如果从p开始的序列比从q开始的序列小，则往后判断，判断从p开始的序列是否比从p+1开始的序列小
		{                     //如果从p开始的序列比从q开始的序列大，则判断从p+1开始的序列比从q开始的序列小，以此类推 
			if(less(i,ans))
				ans = i;
		}
		for(int i = 0;i<len;++i)//此处一定要这样写，如写为i = ans，则i<len+ans才行 
		{
			putchar(a[(ans+i)%len]);
		}
		putchar('\n');
	}
	return 0;
}
