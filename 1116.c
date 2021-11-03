/**
	Arquivo:1116.c
	Implementa:divisao x por y
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int a=0,b=0;
	float x=0,y=0;
	scanf("%d",&a);
	
	for(;a!=0;a-=1)
	{
		scanf("%f %f",&x,&y);
		if (y==0)
			printf("divisao impossivel\n");
		else
		{
			x/=y;
			printf("%.1f\n",x);
		}
	}
			


	return 0;

}