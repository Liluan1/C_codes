# include <stdio.h>
# include <math.h>
int Max,Min;
void max(int a,int b,int c)
{
	if(a>=b&&a>=c)
		Max = a;
 } 
 void min(int a,int b,int c)
 {
 	if(a<=b&&a<=c)
 		Min = a;
 }
 void dif()
 {
 	printf("%d",abs(Max-Min));
 }
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	max(a,b,c);
	max(b,a,c);
	max(c,a,b);
	min(a,b,c);
	min(b,a,c);
	min(c,a,b);
	dif();
	return 0;
}
