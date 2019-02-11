# include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%c%c%c%c",&a,&b,&c,&d);
	switch(a)
	{
		case '0':
			break;
		case '1':
			printf("Ò¼Çª");
			break;
		case '2':
			printf("·¡Çª");
			break;
		case '3':
			printf("ÈþÇª");
			break;
		case '4':
			printf("ËÁÇª");
			break;
		case '5':
			printf("ÎéÇª");
			break;
		case '6':
			printf("Â½Çª");
			break;
		case '7':
			printf("ÆâÇª");
			break;
		case '8':
			printf("°ÆÇª");
			break;
		case '9':
			printf("¾ÁÇª");
			break;
		default:
			printf("qqqq");
	}
	switch(b)
	{
		case '0':
			if(a=='0')
				;
			else
				printf("Áã"); 
			break; 
		case '1':
			printf("Ò¼°Û");
			break;
		case '2':
			printf("·¡°Û");
			break;
		case '3':
			printf("Èþ°Û");
			break;
		case '4':
			printf("ËÁ°Û");
			break;
		case '5':
			printf("Îé°Û");
			break;
		case '6':
			printf("Â½°Û");
			break;
		case '7':
			printf("Æâ°Û");
			break;
		case '8':
			printf("°Æ°Û");
			break;
		case '9':
			printf("¾Á°Û");
			break;
	}
	switch(c)
	{
		case '0':
			if(b=='0')
				;
			else
				printf("Áã");
			break;
		case '1':
			printf("Ò¼Ê°");
			break;
		case '2':
			printf("·¡Ê°");
			break;
		case '3':
			printf("ÈþÊ°");
			break;
		case '4':
			printf("ËÁÊ°");
			break;
		case '5':
			printf("ÎéÊ°");
			break;
		case '6':
			printf("Â½Ê°");
			break;
		case '7':
			printf("ÆâÊ°");
			break;
		case '8':
			printf("°ÆÊ°");
			break;
		case '9':
			printf("¾ÁÊ°");
			break;
	}
		switch(d)
	{
		case '0':
			if(c=='0')
				printf("Áã"); 
			break;
		case '1':
			printf("Ò¼");
			break;
		case '2':
			printf("·¡");
			break;
		case '3':
			printf("Èþ");
			break;
		case '4':
			printf("ËÁ");
			break;
		case '5':
			printf("Îé");
			break;
		case '6':
			printf("Â½");
			break;
		case '7':
			printf("Æâ");
			break;
		case '8':
			printf("°Æ");
			break;
		case '9':
			printf("¾Á");
			break;
	}
	 
	return 0;
 } 
