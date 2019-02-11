# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	i = 0;
	while (i < 101)
	{
		sum = sum + i;
		++i;

	}
	printf("%d\n",sum);

	return 0;
}
//2017-7-27 21:50:04