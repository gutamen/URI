/**
	Arquivo:1044.c
	Implementa:verifica multiplos
	Autor:gustavo antonio martini
	Data:20/04/2021
*/ 

/** 6 24
	

Sao Multiplos

6 25
	

Nao sao Multiplos*/
#include <stdio.h>

int main()
{	int a,b;
	scanf("%d %d",&a,&b);
	
	if ((a%b==0)||(b%a==0))
		printf("Sao Multiplos\n");
	else 
		printf("Nao sao Multiplos\n");	

	return 0;
}