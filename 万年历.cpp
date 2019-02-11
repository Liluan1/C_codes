# include <stdio.h>

int is_runyear(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else
		return 0;
}

int monthday(int y,int m)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		return 31;
	else if(m==4||m==6||m==9||m==11)
		return 30;
	else
	{
		if(is_runyear(y))
			return 29;
		else
			return 28;
	}
}

int xingqi(int y,int m,int d)
{
	int i;
	int sum = 0;
	for(i=0;i<y;++i)
	{
		if(!is_runyear(i))
			sum+=365;
		else
			sum+=366;
	}
	
	for(i=1;i<m;++i)
	{
		sum+=monthday(y,i);
	}
	sum+=d;
	return (sum-2)%7; 
}

int main(void)
{
	char a[] = "一 二 三 四 五 六 日";
	printf("欢迎使用万年历系统\n");
	start:
	printf("----------------------------\n");
	printf("1.月历\n2.星期\n3.母亲节\n4.退出\n");
	int n;
	scanf("%d",&n);
	int y,m,d;
	if(n==1)
	{
		int i,j;
		printf("请输入年月\n");
		scanf("%d%d",&y,&m);
		int week = xingqi(y,m,1);
		int month = monthday(y,m);
		printf("%s\n",a);
		for(i=0;i<week-1;++i)
			printf("   ");
		for(i=week,j=1;i%=7,j<=month;++i,++j)
		{
			if(i==0)
				printf("%2d\n",j);
				
			else
				printf("%2d ",j);
		}
		printf("\n");
		goto start;
	} 
	if(n==2)
	{
		printf("请输入年月日\n");
		scanf("%d%d%d",&y,&m,&d);
		int ans = xingqi(y,m,d);
		printf("星期"); 
		if(ans==0)
			printf("日\n");
		else
			printf("%c%c\n",a[3*(ans-1)],a[3*(ans-1)+1]);
		printf("\n");	
		goto start;
	}
	if(n==3)
	{
		printf("请输入年月日\n");
		scanf("%d%d%d",&y,&m,&d);
		int week = xingqi(y,m,d);
		if(m==5&&week==0&&d>7)
			printf("正确\n");
		else
		{
			int day;
			week = xingqi(y,5,1);//0,8 1,14 2,13 3,12 4,11 5,10 6,9 
			if(week==0)
				day = 8;
			else
				day = 15-week;
			printf("错误，美式母亲节是5月%d日\n",day);
		}
		printf("\n");
		goto start;
	} 
	if(n==4){
		printf("再见\n");
		return 0;
	}
		
	
 } 
