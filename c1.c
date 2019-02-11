# include <stdio.h>
int main(void)
{
	int i = 1;
	int j = 3;
	printf("%d %d\n" , i , j);


	return 0;
}



/*2017年7月6日 23:11:08
目的：测试电脑故障还是软件故障
结果：电脑故障
详情：LINK : fatal error LNK1168: cannot open Debug/c1.exe for writing
由于打开的.exe程序未正常关闭（我认为已关闭，且任务管理器中也无法找到），网络上的解决方法都没有太大用处
后来我发现静等一段时间后程序又正常了，所以我认为电脑有问题，且我已换重装了软件



  */