# include <stdio.h>
# include <string.h>
int main(void)
{
	char ch[1000];
	gets(ch);
	int n = strlen(ch);
	int max = 0,q = 0;
	for(int i=0;i<n;++i)
	{
		int j = i,k = i+1;
	
		while(ch[k++]==ch[j--]&&k<n&&j>=0)
		{
		
			if(k-j-1>max)
			{
				max = k-j-1;
				q = j+1;
			}
		}
	}
	for(int i=0;i<n;++i)
	{
		int j = i-1,k = i+1;
	
		while(ch[k++]==ch[j--]&&k<n&&j>=0)
		{
			if(k-j-1>max)
			{
				max = k-j-1;
				q = j+1;
			}
		}
	}
	for(int i=0;i<=max;++i)
	{
		printf("%c",ch[q+i]);
	}
	return 0;
 }
