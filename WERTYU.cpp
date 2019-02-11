# include <stdio.h>
int main(void)
{
	char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//中间有两个\\表示一个\ 
	
	char c; 
	while((c = getchar())!= EOF)
	{
		int i;
		for(i=1;s[i]&&s[i]!=c;i++);
		if(s[i])
			putchar(s[i-1]);
		else
			putchar(c);
	 } 
	return 0;
 } 
