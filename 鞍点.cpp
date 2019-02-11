#include <stdio.h>

int main(void)
 {
    int a[6][4]; 
    for(int i=0;i<6;++i)
    	for(int j=0;j<4;++j)
    		scanf("%d",&a[i][j]);
    for(int i=0;i<6;++i)
    {
        int max=a[i][0];
        for(int j=0;j<4;++j)
            if(max<a[i][j]) 
	        	max=a[i][j];     
		for(int j=0;j<4;++j)
		{
			if(a[i][j]==max)
			{
				int key = 0;
				for(int k=0;k<6;++k)
				{
					int min = a[i][j];
					if(a[k][j]<min)
						break;
					else
						++key;
				}
				if(key==6)
					printf("%d %d\n",i,j);
			}
		}
	}    

	return 0;
 } 
