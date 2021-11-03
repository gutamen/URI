/**
	Arquivo:1145.c
	Implementa:sequencia logica 2
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>
#include <math.h>


int main()
{
	int a=0,b=0,c=0,j=0,i=0;
	
	scanf("%d %d",&i,&j);
	
	for(;c<j;)
	{
		for(;b<i;b++)
		{
			a+=1;
			if(b<i-1)
			printf("%d ",a);
			else
			printf("%d\n",a);
			c+=1;
		}
		b=0;
	}


	return 0;

}