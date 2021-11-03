/**
	Arquivo:1107.c
	Implementa:escultura a laser
	Autor:gustavo antonio martini
	Data:12/05/2021
*/


#include <stdio.h>

int main()
{
  int altura, largura;
    while (scanf("%d %d", &altura, &largura) && altura!=0 && largura!=0)
    {
        int i, xprev, x, ntimes = 0;


        for (i = 0; i < largura; ++i) {
            scanf("%d", &x);

            if (!i)
                ntimes += altura - x;
            else if (x < xprev)
                ntimes += xprev - x;

            xprev = x;
        }
        printf("%d\n", ntimes);
    }

    return 0;
}
