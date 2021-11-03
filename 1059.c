/**
	Arquivo:1059.c
	Implementa:numeros pares ate 100
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{	
	for(int i=1,b=2;b<100;i++)
	{	
		b=2*i;
		printf("%d\n",b);
		
	}
	return 0;
}