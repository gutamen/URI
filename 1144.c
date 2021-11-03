/**
	Arquivo:1144.c
	Implementa:sequencia logica
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>
#include <math.h>


int main()
{
	int a=0,b=0,c=0,j=0,i=1;
	
	scanf("%d",&j);
	
	j*=2;
	
	for(;i<=j;i++)
	{
		if(i%2==1)
		{
			a+=1;
			b=pow(a,2);
			c=pow(a,3);
			printf("%d %d %d\n",a,b,c);
		}
		else
		{
			b+=1;
			c+=1;
			printf("%d %d %d\n",a,b,c);
		}
			
	}
	


	return 0;

}