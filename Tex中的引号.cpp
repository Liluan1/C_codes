# include <stdio.h>
int main(void)
{
	freopen("input.txt","r",stdin);
	int c,q = 1;
	while((c = getchar() )!= EOF)
	{
		if(c=='"')
		{
			printf("%s",q ? "¡°" : "¡±");
			q = !q; 
		} 
		else
			printf("%c",c);
	}
	fclose(stdin);
	return 0;
}
