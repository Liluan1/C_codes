# include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case(0):
			printf("损坏！\n");
	case(1):
			printf("一层到了！\n");
	case(2):
			printf("二层到了！\n");
	case(3):
			printf("三层到了！\n");
	case(4):
			printf("四层到了！\n");
	case(100):
			printf("你咋不上天呢？\n");
	default:		
			printf("呵呵！\n");

	}
	return 0;
//2017-8-22 22:31:22
	//总结：case()后面需要加“：”
	//      程序从上向下执行
	//		default表示其他数值
}