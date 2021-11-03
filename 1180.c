/**
	Arquivo:1180.c
	Implementa:menor posicao
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>

int main()
{
    int x=0,y=0,z=0,posi=-1;
    int meno=0, posim=0;
    scanf("%d",&x);
    while(x)
    {
        scanf("%d",&y);
        if(posi==-1)
            meno=y;
        
        posi++;
        x--;
        if(meno>y)
        {
            meno=y;
            posim=posi;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",meno,posim);
    


	return 0;

}
