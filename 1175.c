/**
	Arquivo:1175.c
	Implementa:troca em vetor I
	Autor:gustavo antonio martini
	Data:03/08/2021
*/

#include <stdio.h>

int main()
{
    int n[20];
    int x=0,y=0,z=0;

    for(int i=0;i<20;i++)
        scanf("%d",&n[i]);

    x=19;

    for(;y<x;y++)
    {
        z=n[y];
        n[y]=n[x];
        n[x]=z;
        x--;
    }
    for(int i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
	return 0;

}
