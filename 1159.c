/**
	Arquivo:1159.c
	Implementa:soma de pares consectutivos
	Autor:gustavo antonio martini
	Data:22/06/2021
*/

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0;
	while(scanf("%d",&a) && a!=0)
	{
		c=a;
		for(int i=0;i<5;i++)
		{
			if(a%2==1 || a%2==-1)
			a+=1;
			
			b+=a;
			a+=2;
			
		}
		printf("%d\n",b);
		b=0;
	}


	return 0;

}
