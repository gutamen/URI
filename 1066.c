/**
	Arquivo:1066.c
	Implementa:numeros pares,impares, negativo e posivito entre 5
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{
	int a,p=0,im=0,n=0,v=0;
	for (int i=0; i!=5;i++)
	{
		scanf("%d",&a);
		if (a%2==0)
			p+=1;
		else 
			im+=1;
		if(a>0)
			v+=1;
		if(a<0)
			n+=1;
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",p,im,v,n);			
		
	return 0;
}