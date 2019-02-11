# include <stdio.h>
int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i <= 10000; ++i)
	{
		sum = sum + 1.0/i;
	}

	printf("sum = %f\n", sum);

	return 0;
}
// 2017-7-25 20:29:37