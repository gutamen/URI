/**
	Arquivo:1158.c
	Implementa:Soma de Ímpares Consecutivos III
	Autor:gustavo antonio martini
	Data:22/06/2021
*/

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0;
	scanf("%d",&a);

	for(;a>0;a--)
	{
		scanf("%d %d",&b,&c);
		while(1)
		{
			if(b%2==0)
			b+=1;
			d+=b;
			b+=2;
			c--;
			if(c==0)
			break;
		}
		printf("%d\n",d);
		d=0;

	}


	return 0;

}
