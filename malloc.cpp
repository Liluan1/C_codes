# include <stdio.h>
# include <malloc.h>
int main(void)

{
	int a;

	int *i;
	i = (int *) malloc(sizeof(int));

	for(a=0; a<4; ++a)
	{
		scanf("%d",&i[a]);
	}
	for(a=0; a<4; ++a)
	{
		printf("%d  ",i[a]);
	}
	
	free(i);
	
	return 0;

	
}
//2017-8-19 17:30:49 malloc函数动态分配
//心得：malloc前后都有括号，记得添加头文件，malloc只是创造了一个区间，仍需赋值，输出时应为i[a]而不是*i[a]