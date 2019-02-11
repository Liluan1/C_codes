# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
			sum += i;
	}
	printf ("sum = %d\n",sum);

	return 0;
}
//2017-7-25 21:52:23