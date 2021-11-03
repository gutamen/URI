/**
	Arquivo:1105.c
	Implementa:sub prime
	Autor:gustavo antonio martini
	Data:12/05/2021
*/

#include <stdio.h>

int main(){
    int b, n, i, d, c, h, ajuda;

    while(scanf("%d %d", &b, &n) && b!=0 && n!=0)
    {

        ajuda=0;
        int resulta[b];

        for(i = 1; i <= b; i++)
            scanf("%d",&resulta[i]);

        for(i = 1; i <= n; i++){
            scanf("%d %d %d", &d, &c, &h);

            resulta[d] -= h;
            resulta[c] += h;
        }

        for(i = 1; i <= b; i++){
            if(resulta[i] < 0){
                ajuda=1;
                break;
            }
        }

        if(ajuda== 1) printf("N\n");
        else printf("S\n");
   }
   return 0;
}
