/**
	Arquivo:1134.c
	Implementa:tipo combustivel
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0,alco=0,gaso=0,dise=0;
	
	do
	{
		scanf("%d",&a);
		switch (a)
		{	
			case 1 : 
			alco+=1;
			break;
			
			case 2 : 
			gaso+=1;
			break;
			
			case 3: 
			dise+=1;
			break;
			
			case 4: 
			c=1;
			break;
		}
	}
	while(c==0);
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alco,gaso,dise);
			





	return 0;

}