/**
	Arquivo:1133.c
	Implementa:resto de divisao
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int x,y,a=0,b=0,c=0;
	scanf("%d %d",&x,&y);
	if(x<y)
	{
		c=x;
		x=y;
		y=c;
	}
	
	for(y+=1;y<x;y++)
	{
		if(y%5==3 || y%5==2)
			printf("%d\n",y);
	}
	



	return 0;

}