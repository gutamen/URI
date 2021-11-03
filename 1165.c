/**
	Arquivo:1165.c
	Implementa:Número Primo
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
        for(int i=1;i<=b;i++)
        {
            if(b%i==0)
            c+=1;
        }
        if(c==2)
        printf("%d eh primo\n",b);
        else
        printf("%d nao eh primo\n",b);
        c=0;


        a--;
    } while (a>0);
    


	return 0;

}
