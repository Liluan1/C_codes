//2017��9��23�� 17:09:23
/*ע�⺯������ʱ����ʵ��
����������Ϊֹд������ӵ�һ������Ҳ�����ݽṹ�е�һ������֮���ҽ������ܶ�ʱ������ⷽ���ѧϰ�ϣ���ȡ��Ϊһ����ţ 
*/ 
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>//malloc���������ͷ�ļ��� 

struct Arr
{
	int *pBase;//��һ��Ԫ�صĵ�ַ 
	int len;//����ĳ��ȣ��������������ɵ����Ԫ�صĸ��� 
	int cnt;//��ǰ������ЧԪ�صĸ��� 
}; 

//�ֺŲ���ʡ 
//bool���ͷ���true��false 
void init_arr(struct Arr *pArr,int length);//��ʼ������ 
bool append_arr(struct Arr *pArr,int val);//׷�ӣ����������һ��Ԫ�غ����һ��Ԫ�أ�ǰ��������û���� 
bool insert_arr(struct Arr *pArr,int pos,int val);//����Ԫ�أ����鲻���� 
bool delete_arr(struct Arr *pArr,int pos,int *pVal);//ɾ�������е�һ��Ԫ�� 
int get(struct Arr *pArr, int pos, int val);//��ֵ 
bool is_empty(struct Arr *pArr);//�ж������Ƿ�Ϊ�� 
bool is_full(struct Arr *pArr);//�ж������Ƿ��� 
void sort_arr(struct Arr *pArr);//���� 
void show_arr(struct Arr *pArr);//��� 
void inversion_arr(struct Arr *pArr);//�������� 
 
int main(void)
{
	struct Arr arr;
	int val;//�洢�����ĳһ������ֵ 
	
	init_arr(&arr,6);//��ʼ����һ������Ϊ6�Ķ�̬���飬Ӧ��Ϊ4*6�ֽ� 
	append_arr(&arr,1);
	append_arr(&arr,2);
	append_arr(&arr,3);
	append_arr(&arr,4);
	append_arr(&arr,5);
	
	show_arr(&arr);
	return 0;
 } 
 
 void init_arr(struct Arr *pArr,int length)
 {
 	pArr->pBase = (int *)malloc(sizeof(int)*length);
 	//�п��ܴ����ڴ治���޷��������� 
	 if(pArr->pBase == NULL)
 	{
 		printf("��̬�ڴ����ʧ�ܣ�\n");
 		exit(-1);//��ֹ�������� 
	 }
	 else
	 {
	 	pArr->len = length;
	 	pArr->cnt = 0;
	  } 
	  return;//�����ñ���������������Ѿ���ֹ 
	
 }
 
 bool is_full(struct Arr *pArr)
 {
 	if(pArr->cnt == pArr->len)
 		return true;
 	else
 		return false; 
 }
 
 bool is_empty(struct Arr *pArr)
 {
 	if(pArr->cnt == 0)
 		return true;
 	else
 		return false;
 }
 
 //�ں����뺯��֮���һ������
 void show_arr(struct Arr *pArr)
 {
 	if(is_empty(pArr))
 	{
 		printf("����Ϊ�գ�\n");
	 }
	 else
	 {
	 	for(int i=0;i<pArr->cnt;++i)
	 	{
	 		printf("%d ",pArr->pBase[i]);
		 }
			 printf("\n");
		 
	 }
  } 
  
  bool append_arr(struct Arr *pArr,int val)
  {
  	if(is_full(pArr))
  	return false;
  	else
  	{
  		pArr->pBase[pArr->cnt] = val;
  		pArr->cnt++;
  		return true;
	  }
  	
  }
  
  bool insert_arr(struct Arr *pArr,int pos,int val)
  {
  	if(is_full(pArr))
  	return false;
  	if(pos<1||pos>pArr->cnt+1)//������6�������Դӵ�����ǰ�����pos=6��Ҳ���Դӵ�6���������pos=7������cnt>pos+1ʱʧ�� 
  	return false;
  	else
  	{
  		for(int i=pArr->cnt;i>=pos;i--)//����Ҳ��������д (i=pArr->cnt-1; i>=pos-1; --i) 
  		{
  			pArr->pBase[i] = pArr->pBase[i-1];//����ͱ�� pArr->pBase[i+1] = pArr->pBase[i]
		  }
		  pArr->pBase[pos-1] = val;//�����ǲ���� 
		  pArr->cnt++;
		  return true; 
	  }
	  
  }
  
  bool delete_arr(struct Arr *pArr, int pos, int *pVal)
  {
  	if(is_empty(pArr))
  	return false;
  	if(pos<1||pos>pArr->cnt)
  	return false;
  	else
  	{
  		*pVal = pArr->pBase[pos-1];
  		for(int i=pos;i<pArr->cnt;++i)
  		{
  			pArr->pBase[i-1] = pArr->pBase[i]; 
		  }
		  pArr->cnt--;
		  return true;
	  }
  }
  
  void inversion_arr(struct Arr *pArr)
  {
  	int t;
  	int i = 0;
  	int j = pArr->cnt-1;
  	while(i<j)
  	{
  		t = pArr->pBase[i];
  		pArr->pBase[i] = pArr->pBase[j];
  		pArr->pBase[j] = t;
  		i++;
  		j--;
	  }
	  return;
  }
  
  void sort_arr(struct Arr *pArr)
  {
  	int i;
  	int j;
  	int t;
  	for(i=0;i<pArr->cnt;++i)
  	{
  		for(j=i+1;j<pArr->cnt;++j)
  		{
  			if(pArr->pBase[i]>pArr->pBase[j])
  			{
  				t = pArr->pBase[i];
		  		pArr->pBase[i] = pArr->pBase[j];
		  		pArr->pBase[j] = t;
			  }
		  }
	  }
  }
  
  int get(struct Arr *pArr,int pos,int val)
  {
  	if(is_empty(pArr))
  	printf("��ֵʧ��!\n");
  	else if(pos<1||pos>pArr->cnt)
  	printf("��ֵʧ��!\n");
  	else
  	{
  		pArr->pBase[pos-1] = val;
  		printf("��ֵ�ɹ���\n");
  		printf("��Ϊ��%d������ֵ%d",pos,val);
	  }
	  return val;
   } 
