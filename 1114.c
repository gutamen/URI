/**
	Arquivo:1114.c
	Implementa:senha correta
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>
#define senha 2002

int main()
{
	int a=0,b=0,c=0;
	
	for(;a!=senha;)
	{
		scanf("%d",&a);
		if (senha==a)
			printf("Acesso Permitido\n");
		else
			printf("Senha Invalida\n");
	}




	return 0;

}