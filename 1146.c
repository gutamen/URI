/**
	Arquivo:1146.c
	Implementa:sequencias crescentes
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int x,y,a=0,b=0,c=0;
	
	do
	{
		scanf("%d",&x);
		for(;a<x;a++)
		{
			b+=1;
			if(a<x-1)
			printf("%d ",b);
			else
			printf("%d\n",b);	
		}
		b=0;
		a=0;
	}
	while(x>0);
		
	return 0;

}