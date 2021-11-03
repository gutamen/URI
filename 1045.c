/**
	Arquivo:1045.c
	Implementa:tipos de triangulos
	Autor:gustavo antonio martini
	Data:20/04/2021
*/ 

#include <stdio.h>
#include <math.h>

int main()
{	float a,b,c,aq,bq,cq;
	scanf("%f %f %f",&a,&b,&c);

	if (a<b)
	{
	a=a-b;
	b=b+a;
	a=b-a;
	}

	if (b<c)
	{
	b=b-c;
	c=c+b;
	b=c-b;
	}

	if (a<c)
	{
	a=a-c;
	c=c+a;
	a=c-a;
	}

	if (a<b)
	{
	a=a-b;
	b=b+a;
	a=b-a;
	}
	aq=pow(a,2);
	bq=pow(b,2);
	cq=pow(c,2);	


//escreve angulo	
	if (a>=b+c)
		printf("NAO FORMA TRIANGULO\n");
	else
	{
		if (aq==bq+cq)
			{			
				printf("TRIANGULO RETANGULO\n");
			}
		else
		{	
			if (aq>bq+cq)
				{
					printf("TRIANGULO OBTUSANGULO\n"); 
				}
			else
			{
				if (aq<bq+cq)	
				{
				printf("TRIANGULO ACUTANGULO\n");	
				}
			}
		}
		
	

			if(a==b && b==c)
				printf("TRIANGULO EQUILATERO\n");
			else
				{				
				if(b==c||a==b||c==a)
				printf("TRIANGULO ISOSCELES\n");
				}
	}








	//printf("%f %f %f",a,b,c);	
	
	return 0;
}