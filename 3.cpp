# include <stdio.h>
int main(void)
{
	float score;

	printf("���������Ŀ��Գɼ���");

	scanf("%f", &score);

	if (score > 100)
		printf("�������Σ�\n");
	else if (score >= 80 && score <= 100)
		printf("���㣡\n");
	else if (score >= 60 && score < 80)
		printf("����\n");
	else if (score >= 0 && score < 60)
		printf("������\n");
	else if (score < 0)
		printf("�������������룡");

	return 0;
}
2017-7-20 21:03:23