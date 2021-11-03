/**
	Arquivo:1142.c
	Implementa:PUM
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int	a=1,b=2,c=3,j=0;
	
	scanf("%d",&j);
	for(;j!=0;j--)
	{
		printf("%d %d %d PUM\n",a,b,c);
		a+=4;
		b+=4;
		c+=4;
	}



	return 0;

}