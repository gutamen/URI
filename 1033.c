/**
	Arquivo:1033.c
	Implementa:quantas chamdas recursivas?
	Autor:gustavo antonio martini
	Data:28/06/2021
*/
#include <stdio.h>

//using namespace std;
typedef long long unsigned Nu;

int bigmod(Nu n, const int M)
{
    if ( n <= 0 ) return 0;

    Nu a, b, c, d, r;
    a = 1, b = 0 , c = 0, d = 1;
    --n;

    while ( n > 0 )
    {
        if ( n&1 )
        {
            r = ( (d*b) + (c*a) )%M;
            b = ( d*(b+a) + (c*b) )%M;
            a = r;
        }

        r = ( c*c + d*d )%M;
        d = ( d * (2*c + d) )%M;
        c = r;

        n = n/2;
    }
    return (a + b)%M;
}

int main()
{
    long long unsigned k;
    int g, h, re = 0;

    while (scanf("%llu %d",&k,&g) && (k!=0 || g!=0))
    {
        h = ( (2 * bigmod(k+1, g)) - 1 + g ) % g;
        printf("Case %d: %lld %d %d\n", ++re, k, g, h);
    }
    return 0;
}