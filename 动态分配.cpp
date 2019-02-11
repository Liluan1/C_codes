# include <stdio.h>
# include <malloc.h>
int main(void)
{
	int * p;
	int i,j;
	p = (int *)malloc(16);
	for(i=0; i<4;++i)
	{
		scanf("%d",p+i);
	}
	for(j=0; j<4; ++j)
	{
		printf("%d  ",*(p+j));
	}
	
//	printf("%d",*(p+1));
	return 0;
}
//2017-9-8 20:50:28 
//p+i表示的是地址所以不用取地址
//*p+j在计算机中会理解为(*p)+j
//所以我们要写成*(p+j)
//int型变量占4个字节，动态分配数组有几个元素就要分配4*元素数的空间
//malloc前的括号中为“数据类型 *”