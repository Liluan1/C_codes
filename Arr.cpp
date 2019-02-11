//2017年10月5日 23:31:55 
# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Arr
{
	int *pBase;
	int len;
	int cnt;
 } ;
 
 void init_arr(struct Arr *pArr,int length);
 bool append_arr(struct Arr *pArr,int val);
 bool insert_arr(struct Arr *pArr, int pos, int val);
 bool delete_arr(struct Arr *pArr, int pos, int *pVal);
 int get();
 bool is_empty(struct Arr *pArr);
 bool is_full(struct Arr *pArr);
 void sort_arr(struct Arr *pArr);
 void show_arr(struct Arr *pArr);
 void inversion_arr(struct Arr *pArr);
 
 
 int main(void)
 {
 	struct Arr arr;
 	int val;
 	
 	return 0;
 }
 
 void init_arr(struct Arr *pArr, int length)
 {
 	pArr->pBase = (int *)malloc(sizeof(int)*length);
 	if(pArr->pBase == NULL)
 	{
 		printf("内存分配失败\n");
 		exit(-1);
	 }
	 else
	 {
	 	pArr->len = length;
	 	pArr->cnt = 0;
	 }
	 return ;
 }
 
 bool is_empty(struct Arr *pArr)
 {
 	if(pArr->cnt == 0)
 		return true;
	else
		return false; 
 }
 
 bool is_full(struct Arr *pArr)
 {
 	if(pArr->cnt == pArr->len)
 		return true;
 	else
 		return false;
  } 
  
  void show_arr(struct Arr *pArr)
  {
  	if(is_empty(pArr))
  		printf("数组为空\n");
  	else
  	{
  		for(int i=0;i<pArr->cnt;++i)
  		{
  			printf("%d",pArr->pBase[i]);
		  }
		  printf("\n");
	  }
  }
  
  bool append_arr(struct Arr *pArr,int val)
  {
  	if(is_full)
  		return false;
  	pArr->pBase[pArr->cnt] = val;
  	pArr->cnt++;
  	
  }
  
  bool insert_arr(struct Arr *pArr, int pos, int val)
  {
  	if(is_full(pArr))
  		return false;
  	if(pos<1 || pos>pArr->cnt+1)
  		return false;
  	for(int i=pArr->cnt-1;i>=pos-1;--i)
  	{
  		pArr->pBase[i+1] = pArr->pBase[i];
	  }
	  pArr->pBase[pos-1] = val;
	  (pArr->cnt)++;
  }
  
  bool delete_arr(struct Arr *pArr, int pos, int *pVal)
  {
  	if(is_empty(pArr))
  		return false;
  	if(pos<1 || pos>pArr->cnt)
  		return false;
  	
  	*pVal = pArr->pBase[pos-1];
  	for(int i=pos-1;i<pArr->cnt-1;++i)
  	{
  		pArr->pBase[i] = pArr->pBase[i+1];
	  }
	  pArr->cnt--;
	  return ture;
  }
  
  void inversion_arr(struct Arr *pArr)
  {
  	int i = 0;
  	int j = pArr->cnt-1;
  	int t;
  	
  	while(i<j)
  	{
  		t = pArr->pBase[i];
  		pArr->pBase[i] = pArr->pBase[j];
  		pArr->pBase[j] = t;
  		i++;
  		j--;
	  }
	  return ;
   }
   
  void sort_arr(struct Arr *pArr)
  {
  	int i,j,t;
  	for(i=0;i<pArr->cnt-1;i++)
  	{
  		for(j=i+1;j<pArr->cnt;j++)
  		{
  			if(pArr->pBase[i]>pArr->pBase[j])
  			{
  				t = pArr->pBase[i];
  				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = t; 
  				
			  }
		  }
	  }
	  return ;
   		
   }
   
	
  
  
