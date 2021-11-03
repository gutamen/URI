/**
	Arquivo:1060.c
	Implementa:numeros positivos
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{	float a;
	int b;
	for (int i=0; i!=6;i++)
	{
		scanf("%f",&a);
		if (a>0)
			b+=1;
	}
	printf("%d valores positivos\n",b);			
		
	return 0;
}