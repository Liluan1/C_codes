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
			printf("ҼǪ");
			break;
		case '2':
			printf("��Ǫ");
			break;
		case '3':
			printf("��Ǫ");
			break;
		case '4':
			printf("��Ǫ");
			break;
		case '5':
			printf("��Ǫ");
			break;
		case '6':
			printf("½Ǫ");
			break;
		case '7':
			printf("��Ǫ");
			break;
		case '8':
			printf("��Ǫ");
			break;
		case '9':
			printf("��Ǫ");
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
				printf("��"); 
			break; 
		case '1':
			printf("Ҽ��");
			break;
		case '2':
			printf("����");
			break;
		case '3':
			printf("����");
			break;
		case '4':
			printf("����");
			break;
		case '5':
			printf("���");
			break;
		case '6':
			printf("½��");
			break;
		case '7':
			printf("���");
			break;
		case '8':
			printf("�ư�");
			break;
		case '9':
			printf("����");
			break;
	}
	switch(c)
	{
		case '0':
			if(b=='0')
				;
			else
				printf("��");
			break;
		case '1':
			printf("Ҽʰ");
			break;
		case '2':
			printf("��ʰ");
			break;
		case '3':
			printf("��ʰ");
			break;
		case '4':
			printf("��ʰ");
			break;
		case '5':
			printf("��ʰ");
			break;
		case '6':
			printf("½ʰ");
			break;
		case '7':
			printf("��ʰ");
			break;
		case '8':
			printf("��ʰ");
			break;
		case '9':
			printf("��ʰ");
			break;
	}
		switch(d)
	{
		case '0':
			if(c=='0')
				printf("��"); 
			break;
		case '1':
			printf("Ҽ");
			break;
		case '2':
			printf("��");
			break;
		case '3':
			printf("��");
			break;
		case '4':
			printf("��");
			break;
		case '5':
			printf("��");
			break;
		case '6':
			printf("½");
			break;
		case '7':
			printf("��");
			break;
		case '8':
			printf("��");
			break;
		case '9':
			printf("��");
			break;
	}
	 
	return 0;
 } 
