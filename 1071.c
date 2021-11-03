/**
	Arquivo:1071.c
	Implementa:soma de numeros impares
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0;
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



					

	return 0;
}