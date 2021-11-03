/**
	Arquivo:1031.c
	Implementa:crise de energia
	Autor:gustavo antonio martini
	Data:03/08/2021
*/

#include <stdio.h>
#include <string.h>

int sub(int n, int k)
{
    int i, bye = 0;

    for (i = 1; i < n; ++i)
        bye = (bye + k) % i;

    return bye;
}

int main()
{
    int N, k;

    while (scanf("%d", &N) && N!=0) 
    {
    

        k = 1;
        while (sub(N, k) + 2 != 13)
            ++k;

        printf("%d\n", k);
    }

    return 0;
}