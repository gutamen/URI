/**
	Arquivo:1029.c
	Implementa:fibonacci quantas chamadas
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include<stdio.h>

int main() {
    int qvezes, i;
    long long int a;
    long long int acum[61];
    long long int chamdas[60];
    
    scanf("%i",&qvezes);
    
    while (qvezes>0)
    {
    
        scanf("%lld", &a);

        int i;

        acum[0] = 0;
        acum[1] = 1;

        chamdas[0] = 0;
        chamdas[1] = 0;
        
        for(i = 2; i <= a; i++) 
        {
            acum[i] = acum[i-1] + acum[i-2];
            chamdas[i] = chamdas[i-1] + chamdas[i-2] + 2;
        }
    
        printf("fib(%lld) = %lld calls = %lld\n", a, chamdas[a], acum[a]);
        qvezes--;
    }
    return 0;
}