# include <stdio.h>
int main (void)
{
	int i;
	int j = 3;
	i = (++j, j++, j+2, j-3);
	printf("%d\n",i);
	return 0;
}
//2017-7-27 18:46:23