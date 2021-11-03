/**
	Arquivo:1067.c
	Implementa:impares
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d",&a);

	if (a%2==0)
	{
		for (int i=0;(b!=a-1);i++)
		{
			b=(2*i)+1;
			printf("%d\n",b);	
		}
	}
	else	
	{
		for (int i=0;(b!=a);i++)
		{
			b=(2*i)+1;
			printf("%d\n",b);	
		}
	}	
	return 0;
}