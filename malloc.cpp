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
//2017-8-19 17:30:49 malloc������̬����
//�ĵã�mallocǰ�������ţ��ǵ����ͷ�ļ���mallocֻ�Ǵ�����һ�����䣬���踳ֵ�����ʱӦΪi[a]������*i[a]