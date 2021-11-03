/**
	Arquivo:1118.c
	Implementa:
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	float a=0,b=0,m=0;
	int e=0,f=0;
	
	do
	{
		for(;f!=2;)
		
		{
			scanf("%f",&a);
			
			if (a<0 || a>10)
				printf("nota invalida\n");
			else
			{
				f+=1;
				m+=a;
			}
			if (f==2)
			{
				m/=2;
				printf("media = %.2f\n",m);
			}
		}
		f=0;
		m=0;
		do
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&e);
		}
		while(e>2 || e<1);
	}
	while(e!=2);
	return 0;

}