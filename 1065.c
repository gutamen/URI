/**
	Arquivo:1065.c
	Implementa:numeros pares entre 5
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{
	int a,b;
	for (int i=0; i!=5;i++)
	{
		scanf("%d",&a);
		if (a%2==0)
			b+=1;
	}
	printf("%d valores pares\n",b);			
		
	return 0;
}