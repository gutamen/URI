/**
	Arquivo:1176.c
	Implementa:fibo em vetor
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>
#include <math.h>


int main()
{
    int x=0,y=0,l=0,p=0;
    long long int z=0;
    scanf("%d",&x);
    while(x)
    {
        z=0;
        scanf("%d",&y);
        if(y>0)
            z=1;
        if(y>2)
        for(long long int i=2,j=1,l=1;i<y;i++)
        {
            z=l+j;
            l=j;
            j=z;
            
        }

        printf("Fib(%d) = %lld\n",y,z);
        x--;
    }


	return 0;

}
