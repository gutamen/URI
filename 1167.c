/**
	Arquivo:1167.c
	Implementa:Acampamento de Férias
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>

struct crianca {
    char name[30];
    int value;
    int prev, next;
};

int main()
{
    int N;
    while (scanf("%d", &N) && N!=0) 
    {
        int i, j;
        struct crianca bob[100];


        for (i = 0; i < N; ++i) {
            scanf("%s%d", bob[i].name, &bob[i].value);

            bob[i].prev = ((i - 1) % N + N) % N;
            bob[i].next = (i + 1) % N;
        }

        i = 0;
        while (N > 1) {
            int value = bob[i].value;

            if (value % 2) {
                for (j = 0; j < value; ++j)
                    i = bob[i].next;
            } else {
                for (j = 0; j < value; ++j)
                    i = bob[i].prev;
            }

            bob[bob[i].prev].next = bob[i].next;
            bob[bob[i].next].prev = bob[i].prev;

            --N;
        }
        i = bob[i].next;

        printf("Vencedor(a): %s\n", bob[i].name);
    }

    return 0;
}