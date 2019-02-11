# include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("最大值为:%d\n", a);
	else if ( b > a && b > c)
		printf("最大值为:%d\n", b);
	else if ( c > a && c > b)
		printf("最大值为:%d\n", c);

	



	return 0;
}
//2017-7-20 22:14:55