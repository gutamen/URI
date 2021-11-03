/**
	Arquivo:1047.c
	Implementa:tempo de jogo com minutos
	Autor:gustavo antonio martini
	Data:20/04/2021
*/ 


#include <stdio.h>

int main()
{  int a,b,c,d,f,g;
   scanf("%d %d %d %d",&a,&b,&c,&d);

	a=((a*60)+b);
	c=((c*60)+d);

   if (a-c>=0)
   {
		f=(1440-a+c)/60;
		g=(1440-a+c)%60;
   }
	if (a-c<0)	
	{
		f=((a-c)*-1)/60;
		g=((a-c)*-1)%60;
	}
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",f,g);

    return 0;
}