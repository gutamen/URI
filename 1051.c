/**
	Arquivo:1051.c
	Implementa:imposto de renda
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{
	float a,b;
	scanf("%f",&a);
	if (a>4500)
	{
		b=(1500.00*0.18)+(1000.00*0.08)+(0.28*(a-4500.00));
		printf("R$ %.2f\n",b);
	}
	else
		if (a>3000)
			{
			b=(0.08*1000.00)+(0.18*(a-3000.00));
			printf("R$ %.2f\n",b);
			}
		else
			if(a>2000)
				{
				b=(a-2000.00)*0.08;
				printf("R$ %.2f\n",b);
				}
			else
				printf("Isento\n");
	return 0;
}