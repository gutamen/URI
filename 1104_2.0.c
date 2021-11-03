/**
	Arquivo:1104.c
	Implementa:troca de cartas
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define valor_maximo 1000001
#define verdadeiro 1
#define falso 0
#define MENOR(a, b) a < b ? a : b

int cartas[2][valor_maximo];

int main(){	
	
	int qnt[2], troca[2], e, i, j, maior;
	
	while(scanf("%d %d", &qnt[0], &qnt[1]) && qnt[0] && qnt[1])
    {
		for(i=0; i<2; i++)
			memset(cartas[i], falso, valor_maximo);
		
		for(i=0, maior=0; i<2; i++)
			for(j=0; j<qnt[i]; j++)
            {
				scanf("%d", &e);
				cartas[i][e] = verdadeiro;
				if(maior < e)
					maior = e;
			}
		
		for(i=0, e=1; i<2; i++, e=-1)
			for(j=1, troca[i] = 0; j<=maior; j++)
				if(cartas[i][j] && !cartas[i+e][j])
					troca[i]++;					
		
		printf("%d\n", MENOR(troca[0], troca[1]));		
	} 
	
	return 0;
}