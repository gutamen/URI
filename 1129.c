/**
	Arquivo:1129.c
	Implementa:leitura otica
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0,e=0,n=0,i=0,x=0;
	char y;
	while(scanf("%d",&n ) && n>0)
	{
		for(i=n;i>0;i--)
		{
			x=0;
			scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
			if(a<=127)
			{
				y='A';
				x+=1;
			}
			if(b<=127)
			{
				y='B';
				x+=1;
			}
			if(c<=127)
			{
				y='C';
				x+=1;
			}
			if(d<=127)
			{
				y='D';
				x+=1;
			}
			if(e<=127)
			{
				y='E';
				x+=1;
			}
			if(x==1)
				printf("%c\n",y);
			else
				printf("*\n");
		}
	}

	return 0;

}
