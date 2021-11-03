/**
	Arquivo:1115.c
	Implementa:quadrantes
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 




#include <stdio.h>

int main()
{   float x=1,y=1,c=1;

	for(;c!=0;)
		if(x!=0 && y!=0)
		{	
			scanf("%f %f",&x,&y);
			if (x>0 && y>0)
				printf("primeiro\n");
			if (x<0 && y>0)
				printf("segundo\n");
			if (x<0 && y<0)
				printf("terceiro\n");
			if (x>0 && y<0)
				printf("quarto\n");
			c=x*y;
		
		}
    
    return 0;
}