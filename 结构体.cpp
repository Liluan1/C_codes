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
//�ܽ�:�޷�����ĸ����������룬����������������򣻽ṹ������ֲ��������֣��޷�ʶ������Ҫ�ӷֺţ�һ����ָ�����޸Ľṹ�塣
//     ����ʱ���뷢�͵�ַ�����ʱʱ���鷢�ͱ����������������޸����е�ֵ���ں��������ü���return,��ʹ��û�з���ֵ������¡�