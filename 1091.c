/**
	Arquivo:1091.c
	Implementa:divisao nlogonia
	Autor:gustavo antonio martini
	Data:13/05/2021
*/




#include <stdio.h>

int main()
{   float x=1,y=1,c=1,j=0,p=0,u=0,i=0;

	while(scanf("%f",&c) && c!=0)
	{
	    scanf("%f %f",&u,&i); 
		for(j=c;j>0;j--)
		{
			scanf("%f %f",&x,&y);
			if (x>0+u && y>0+i)
				printf("NE\n");
			if (x<0+u && y>0+i)
				printf("NO\n");
			if (x<0+u && y<0+i)
				printf("SO\n");
			if (x>0+u && y<0+i)
				printf("SE\n");
			if (x==0+u || y==0+i)
			printf("divisa\n");
		}
	}
    return 0;
}
