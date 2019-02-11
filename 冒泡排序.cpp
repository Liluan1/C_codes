#include <stdio.h>

int main(void)
{
	int a[6] = {3, 6, 0, -3, 1, 12};
	for(i = 0; i < 5; ++i)
	{
		for(j = 0; j < 5-i; ++j)
		{
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			
		}
	}
	for(b=0; b<6; ++b)
	{
		printf("%d  ",a[b]);
	}
	return 0;
}
//17. 8. 14 12µã10·Ö Ã°ÅÝÅÅÐò