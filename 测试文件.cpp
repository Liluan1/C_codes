# include<stdio.h>
int main(void)
{
	int i = 123;
	int j = 256;
	int t;
	t = i;
	i = j;
	j = t;
	printf("%d  %d  %d  ",i, j, t);
	return 0;
}
