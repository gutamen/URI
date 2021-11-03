/**
	Arquivo:1124.c
	Implementa:elevador
	Autor:gustavo antonio martini
	Data:12/05/2021
*/

#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main()
{
	int a=0,b=0,l=0,c=0,r11,r22;



while(scanf("%d %d %d %d",&l,&c,&r11,&r22) && l!=0 && c!=0 && r11!=0 && r22!=0)
{
	if(MIN(l,c)<MAX(r11,r22)*2)
	{
	printf("N\n");
	}
	else
	{
		r11+=r22;
		l-=r11;
		c-=r11;
		if(r11*r11<=((l*l)+(c*c)))
		{
		printf("S\n");
	  }
		else
		{
		printf("N\n");
		}
	}
}


	return 0;

}
