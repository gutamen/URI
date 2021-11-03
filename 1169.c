/**
	Arquivo:1169.c
	Implementa:trigo no tabuleiro
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long double a=0;
    long long unsigned res=0;
    int b=0,c=0;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&c);
        a=pow(2,c)/12000;
        res=a;
        printf("%llu kg\n",res);
    }


	return 0;

}
