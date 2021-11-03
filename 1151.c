/**
	Arquivo:1151.c
	Implementa:fibo simples
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>

int main()
{
	int a=0,b=0,c=1,d=0,i=0;

	scanf("%d",&a);

	if(a>=1)
	{
		if(a==1)
			printf("0\n");
		else
			printf("0 ");
	}

	if(a>=2)
	{
		if(a==2)
			printf("1\n");
		else
			printf("1 ");
	}

	for(i=3;i<=a;i++)
	{
		d=c+b;
		if(i!=a)
			printf("%d ",d );
		else
			printf("%d\n",d );
		b=c;
		c=d;
	}
	return 0;

}
