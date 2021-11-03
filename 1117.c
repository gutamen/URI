 /**
	Arquivo:1117.c
	Implementa:valida nota
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	float a=0,b=0,m=0;
	int e=0,f=0;
	
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

	return 0;

}