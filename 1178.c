/**
	Arquivo:1178.c
	Implementa:preenchimento de vetor III
	Autor:gustavo antonio martini
	Data:03/08/2021
*/

#include <stdio.h>

int main()
{
    double n[100];
    int x=0;
    double t;
    scanf("%lf",&t);
    n[x]=t;
    while(x<100)
    {

            
            printf("N[%d] = %.4lf\n",x,n[x]);
            x++;
            n[x]=n[x-1]/2;
            
        
    }


	return 0;

}
