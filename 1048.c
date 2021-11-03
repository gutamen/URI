/**
	Arquivo:1048.c
	Implementa:aumento de salario
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{	
	float a,b;
	int c;
	scanf("%f",&a);
	if(a>2000)
	{
		b=a*1.04;
		a=b-a;
		c=4;
	}
	else
		if (a>1200)
		{
			b=a*1.07;
			a=b-a;
			c=7;
		}
		else
			if (a>800)
			{
				b=a*1.10;
				a=b-a;
				c=10;
			}
			else
				if (a>400)
				{
					b=a*1.12;
					a=b-a;
					c=12;
				}
				else
				{	
					b=a*1.15;
					a=b-a;
					c=15;
				}
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",b,a,c);

	return 0;
}