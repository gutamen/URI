/**
	Arquivo:1132.c
	Implementa:multiplos de 13
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int x,y,a=0,b=0,c=0;
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		b=x;
		x=y;
		y=b;
	}
	
	
	a=x;
	b=y;
	for(;x<=y;x++)
	{
		if(x%13!=0)
			c+=x;
	}
	
	printf("%d\n",c);


	return 0;

}