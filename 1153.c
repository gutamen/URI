/**
	Arquivo:1153.c
	Implementa:fatorial simples
	Autor:gustavo antonio martini
	Data:12/05/2021
*/

#include <stdio.h>

int main()
{
	int a=0,b=0,soma=1,c=0;

	scanf("%d",&a);
	for(c=1;c<=a;c++)
	{
		soma*=c;
	}

	printf("%d\n",soma );
	return 0;

}
