/**
	Arquivo:1143.c
	Implementa:ao quadrado e cubo
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>
#include <math.h>


int main()
{
	int a=0,b=0,c=0,j=0;
	
	scanf("%d",&j);
	
	for(;j!=0;j--)
	{
		a+=1;
		b=pow(a,2);
		c=pow(a,3);
		printf("%d %d %d\n",a,b,c);
	}


	return 0;

}