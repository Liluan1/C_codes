# include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case(0):
			printf("�𻵣�\n");
	case(1):
			printf("һ�㵽�ˣ�\n");
	case(2):
			printf("���㵽�ˣ�\n");
	case(3):
			printf("���㵽�ˣ�\n");
	case(4):
			printf("�Ĳ㵽�ˣ�\n");
	case(100):
			printf("��զ�������أ�\n");
	default:		
			printf("�Ǻǣ�\n");

	}
	return 0;
//2017-8-22 22:31:22
	//�ܽ᣺case()������Ҫ�ӡ�����
	//      �����������ִ��
	//		default��ʾ������ֵ
}