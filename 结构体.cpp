# include <stdio.h>
struct s
{
	int age;
	char sex;
	float score;
};
void shuchu(struct s );
void shuru(struct s *);
int main(void)	

{
	struct s asd ;
	struct s *a = &asd;
	shuru(a);
	shuchu(asd);
	
	
	return 0;
}
void shuchu(struct s i)
{
	printf("%d  %f  %c\n",i.age ,i.score ,i.sex);
	return;
}

void shuru(struct s * b)
{
	scanf("%c",&b->sex);
	scanf("%d%f",&b->age, &b->score);
	//scanf("%c",&b->sex);
	
	return;
}
//2017-8-22 21:59:10
//总结:无法将字母放在最后输入，会跳过输入结束程序；结构体的名字不能是数字，无法识别；声名要加分号；一般用指针来修改结构体。
//     输入时必须发送地址，输出时时建议发送变量名，这样不会修改其中的值；在函数最后最好加入return,即使在没有返回值的情况下。