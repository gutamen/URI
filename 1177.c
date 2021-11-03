/**
	Arquivo:1177.c
	Implementa:preenchimento de vetor
	Autor:gustavo antonio martini
	Data:03/08/2021
*/

#include <stdio.h>

int main()
{
    int n[1000];
    int x=0;
    int t;
    scanf("%d",&t);
    while(x<1000)
    {
        for(int i=0;(i<t)&&x<1000;i++)
        {
            n[x]=i;
            printf("N[%d] = %d\n",x,n[x]);
            x++;
            
        }
    }


	return 0;

}
