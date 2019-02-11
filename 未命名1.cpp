# include <stdio.h>
# include <string.h>
int main(void)
{
	char a[1005],t;
	gets(a);
	int len = strlen(a);


	for(int i=0;i<len;++i)
	{
		int ans = i;
		
		if(a[i]>'z'||a[i]<'A'||a[i]>'Z'&&a[i]<'a')
			i++;
		if(a[ans]>'z'||a[ans]<'A'||a[ans]>'Z'&&a[ans]<'a')
			ans++;
		if(a[i]>a[len-1-ans])
		{
			t = a[i];
			a[i] = a[len-1-ans];
			a[len-1-ans] = t;
		}
	}
	puts(a);
	return 0;
}
