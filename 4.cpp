# include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("���ֵΪ:%d\n", a);
	else if ( b > a && b > c)
		printf("���ֵΪ:%d\n", b);
	else if ( c > a && c > b)
		printf("���ֵΪ:%d\n", c);

	



	return 0;
}
//2017-7-20 22:14:55