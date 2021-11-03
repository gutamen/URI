/**
	Arquivo:1099.c
	Implementa:soma de numeros impares e sua quantidade
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	scanf("%d",&e);
	for(;e!=0;e-=1)
	{
		scanf("%d %d",&a,&b);
		if(b>a)
		{
			d=a;
			a=b;
			b=d;
		}
		if(a%2!=0)	
		{	
			for(a=a-2;a>=b+1;a-=2)
			{
				c+=a;
			}
		}
		else	
		{	
			a-=1;
			for(;a>=b+1;a-=2)
			{
				c+=a;
			}
		}	
		printf("%d\n",c);
		c=0;
    }


					

	return 0;
}