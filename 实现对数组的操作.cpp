//2017年9月23日 17:09:23
/*注意函数调用时许发送实参
这是我至今为止写过的最复杂的一个程序，也是数据结构中第一个程序，之后我将会抽出很多时间放在这方面的学习上，争取成为一个大牛 
*/ 
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>//malloc函数在这个头文件中 

struct Arr
{
	int *pBase;//第一个元素的地址 
	int len;//数组的长度，即数组所能容纳的最大元素的个数 
	int cnt;//当前数组有效元素的个数 
}; 

//分号不能省 
//bool类型返回true或false 
void init_arr(struct Arr *pArr,int length);//初始化数组 
bool append_arr(struct Arr *pArr,int val);//追加，在数组最后一个元素后面加一个元素，前提是数组没有满 
bool insert_arr(struct Arr *pArr,int pos,int val);//插入元素，数组不能满 
bool delete_arr(struct Arr *pArr,int pos,int *pVal);//删除数组中的一个元素 
int get(struct Arr *pArr, int pos, int val);//赋值 
bool is_empty(struct Arr *pArr);//判断数组是否为空 
bool is_full(struct Arr *pArr);//判断数组是否满 
void sort_arr(struct Arr *pArr);//排序 
void show_arr(struct Arr *pArr);//输出 
void inversion_arr(struct Arr *pArr);//倒置数组 
 
int main(void)
{
	struct Arr arr;
	int val;//存储数组的某一变量的值 
	
	init_arr(&arr,6);//初始化了一个长度为6的动态数组，应该为4*6字节 
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
 	//有可能存在内存不足无法分配的情况 
	 if(pArr->pBase == NULL)
 	{
 		printf("动态内存分配失败！\n");
 		exit(-1);//终止整个程序 
	 }
	 else
	 {
	 	pArr->len = length;
	 	pArr->cnt = 0;
	  } 
	  return;//可以让别人明白这个函数已经终止 
	
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
 
 //在函数与函数之间加一个空行
 void show_arr(struct Arr *pArr)
 {
 	if(is_empty(pArr))
 	{
 		printf("数组为空！\n");
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
  	if(pos<1||pos>pArr->cnt+1)//假设有6个数可以从第六个前面插入pos=6，也可以从第6个后面插入pos=7，所以cnt>pos+1时失败 
  	return false;
  	else
  	{
  		for(int i=pArr->cnt;i>=pos;i--)//这里也可以这样写 (i=pArr->cnt-1; i>=pos-1; --i) 
  		{
  			pArr->pBase[i] = pArr->pBase[i-1];//这里就变成 pArr->pBase[i+1] = pArr->pBase[i]
		  }
		  pArr->pBase[pos-1] = val;//这里是不变的 
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
  	printf("赋值失败!\n");
  	else if(pos<1||pos>pArr->cnt)
  	printf("赋值失败!\n");
  	else
  	{
  		pArr->pBase[pos-1] = val;
  		printf("赋值成功！\n");
  		printf("您为第%d个数赋值%d",pos,val);
	  }
	  return val;
   } 
