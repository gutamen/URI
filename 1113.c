/**
	Arquivo:1113.c
	Implementa:crescente ou decrescente
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int m=0,n=1,a=0,b=0,c=0;
	
	for(;n!=m;)
	{
		scanf("%d %d",&m,&n);
		if (n!=m)
		{
			
			if (m<n)
			{
				printf("Crescente\n");
			}

			if (m>n)
			{
				printf("Decrescente\n");
			}
		
		
		}
	}
	
	return 0;

}
		