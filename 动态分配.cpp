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
//p+i��ʾ���ǵ�ַ���Բ���ȡ��ַ
//*p+j�ڼ�����л����Ϊ(*p)+j
//��������Ҫд��*(p+j)
//int�ͱ���ռ4���ֽڣ���̬���������м���Ԫ�ؾ�Ҫ����4*Ԫ�����Ŀռ�
//mallocǰ��������Ϊ���������� *��