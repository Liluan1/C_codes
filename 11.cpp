# include <stdio.h>
# include <math.h>

int main(void)

{
	//������ϵ�����浽�������
	int a, b, c;//=����ʾ��ȣ���ʾ��ֵ
	scanf("%d %d %d", &a, &b, &c);

	double delta; //delt��ŵ��� b*b - 4*a*c
	double x1; //���һԪ���η��̵�����һ����
	double x2; //���һԪ���η��̵�����һ����
	
	delta = b*b - 4*a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("��һԪ���η�����������, x1 = %f, x2 = %f\n", x1, x2);
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2*a);
		x2 = x1;  //�ұ߸������
		printf("��һԪ���η�����һ��Ψһ��, x1 = x2 = %f\n", x1);
	}
	else
	{
		printf("�޽�\n");
	}

	return 0;
}
//2017-7-12 20:48:51