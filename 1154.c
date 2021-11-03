/**
	Arquivo:1154.c
	Implementa:idades
	Autor:gustavo antonio martini
	Data:12/05/2021
*/

#include <stdio.h>

int main()
{
int a=0,soma=0;
float b=0.00,media=0;
while(scanf("%d",&a) && a>=0)
{
	soma+=a;
	b+=1.00;
}

if(soma>0)
	media=soma/b;

printf("%.2f\n",media) ;
return 0;


}
