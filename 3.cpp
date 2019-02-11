# include <stdio.h>
int main(void)
{
	float score;

	printf("请输入您的考试成绩：");

	scanf("%f", &score);

	if (score > 100)
		printf("这是做梦！\n");
	else if (score >= 80 && score <= 100)
		printf("优秀！\n");
	else if (score >= 60 && score < 80)
		printf("及格！\n");
	else if (score >= 0 && score < 60)
		printf("不及格！\n");
	else if (score < 0)
		printf("错误！请重新输入！");

	return 0;
}
2017-7-20 21:03:23