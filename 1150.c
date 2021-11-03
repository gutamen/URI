/**
	Arquivo:1150.c
	Implementa:ultrapassando Z
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int x,z,a=0,b=0,c=1;
	scanf("%d",&x);
	do
	{
		scanf("%d",&z);
	}
	while(z<=x);
	b=x;
	for(;x<z;)
	{
		
		x+=b+1;
		b+=1;
		c+=1;
	}
	printf("%d\n",c);


	return 0;

}