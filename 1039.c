/**
	Arquivo:1039.c
	Implementa:flor de fogo
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int r1=0,x1=0,y1=0,r2=0,x2=0,y2=0;
	double soluc=0;

	while (scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2)!=EOF)
	{

		soluc=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		if(r1>=r2+soluc)
			printf("RICO\n");
		else
			printf("MORTO\n");


		/*if((r2+soluc)>r1)
			printf("MORTO\n");
		else
			printf("RICO\n");*/
	}



	return 0;

}
