/**
	Arquivo:1164.c
	Implementa:Número Perfeito
	Autor:gustavo antonio martini
	Data:22/06/2021
*/

#include <stdio.h>

int main()
{
    int a=0,b=0,c=0;
    scanf("%d",&a);
    do
    {
        scanf("%d",&b);
        for(int i=1;i<=b/2;i++)
        {
            if(b%i==0)
            c+=i;
        }
        if(b==c)
        printf("%d eh perfeito\n",b);
        else
        printf("%d nao eh perfeito\n",b);
        c=0;


        a--;
    } while (a>0);
    


	return 0;

}
