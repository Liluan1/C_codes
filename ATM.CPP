# include <stdio.h>
void chaxun(int a3)
{
	int b;
	b = a3;
	printf("您的余额为：%d\n",b);
}
int qukuan(int a3)
{
	int a,b;
	printf("请输入您要提取的现金：\n");
	scanf("%d",&a);
	b = a3 - a;
	if(b<0)
	{
		printf("对不起，您的余额不足\n");
	}
	else
	{
		printf("请收好您的%d元现金\n",a);
		a3 = a3 - a;
	}
	return (a3);
}
int gaimi(int a2)
{
	int b;
	int d;
	int c = 1;
	int e = 1;
	while(e)
	{
		printf("请输入您的旧密码：\n");
		scanf("%d",&d);
		if(d == a2)
			e = 0;
		else
		{
			e = 1;
			printf("您输入的密码错误，请重新输入：\n");
		}
	}
	while(c)
	{
		printf("请输入您的六位数新密码\n");
		scanf("%d",&a2);
		printf("请确认您的新密码\n");
		scanf("%d",&b);
		if(a2 == b)
		{
			if(b>100000 && b<999999 && b/(b/100000)!=111111)//b/(b/100000)!=111111 表示不是六位相同的数字
			{
				c = 0;
				printf("密码修改成功\n");
			}
			else
			{
				printf("您输入的密码不符合要求，请重新输入\n");
				c = 1;
			}
				
		}
		else
		{
			c = 1;
			printf("您两次输入的密码不一致，请重新输入：\n");
		}
	}
	return a2;
}
void quka(void)
{
	printf("\n提醒您\n");
	printf("请收好您的卡片，谢谢，再见\n\n");
}
int cunkuan(int a3)
{
	int k;
	printf("请输入您要存入的金额\n");
	scanf("%d",&k);
	if(k<0)
	{
		printf("错误！\n");
	}
	else
	{
		printf("\n您好，您已存入%d元\n",k);
		a3 = a3 + k;
	}
	return a3;
}
int main(void)
{
	int b = 1;
	int c;
	int k;
	int l;
	int a1 = 123456;
	int a2 = 123456;
	int a3 = 1000;
	printf("欢迎使用自动柜员机：\n\n");
	while(b == 1)
	{
		printf("请输入您的账号：\n");
		scanf("%d",&k);
		printf("请输入您的密码：\n");
		scanf("%d",&l);
		if(k == a1 && l == a2)
		{
			b = 0;
			printf("您的账户余额为：%d\n",a3);
		}
		else
		{
			b = 1;
			printf("您输入的账号或密码有误，请重新输入：\n");
		}
	}
	do
	{
		printf("\n请选择您要的服务项目：\n");
		printf("1.查询余额\n");
		printf("2.取款\n");
		printf("3.修改密码\n");
		printf("4.取卡\n");
		printf("5.存款\n");
		scanf("%d",&c);
		switch(c)
		{
		case 1:
			chaxun(a3);
			break;
		case 2:
			a3 = qukuan(a3);
			break;
		case 3:
			a2 = gaimi(a2);
			break;
		case 4:
			quka();
			break;
		case 5:
			a3 = cunkuan(a3);
			break;

		}
	}while(c != 4);
	return 0;
}
//2017-9-10 11:48:03
//注意中英文符号的不能混用
//注意函数的名称是否准确