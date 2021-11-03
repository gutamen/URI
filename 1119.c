/**
	Arquivo:1119.c
	Implementa:a fila de desempregados
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>

struct rino {
    int value;
    int prev;
    int next;
};

int main()
{
    int N, k, m;

    while (scanf("%d%d%d", &N, &k, &m) && N && k && m) 
    {
        struct rino candidato[21];
        int i, b1, b2;
        int sobrando;




        for (i = 1; i <= N; ++i) {
            candidato[i].value = i;
            candidato[i].prev = (i == 1) ? N : i - 1;
            candidato[i].next = (i == N) ? 1 : i + 1;
        }
        candidato[0].next = 1;
        candidato[N + 1].prev = N;

        sobrando = N;
        b1 = 0;
        b2 = N + 1;

        while (1) {
            for (i = 0; i < k; ++i)
                b1 = candidato[b1].next;
            for (i = 0; i < m; ++i)
                b2 = candidato[b2].prev;

            printf("%3d", candidato[b1].value);
            --sobrando;
            if (b1 != b2) {
                printf("%3d", candidato[b2].value);
                --sobrando;
            }

            if (candidato[b1].prev == b2 || candidato[b1].next == b2) {
                if (candidato[b1].prev == b2) {
                    candidato[b1].prev = candidato[b2].prev;
                    candidato[b2].next = candidato[b1].next;
                }
                if (candidato[b1].next == b2) {
                    candidato[b1].next = candidato[b2].next;
                    candidato[b2].prev = candidato[b1].prev;
                }
            }

            candidato[candidato[b1].prev].next = candidato[b1].next;
            candidato[candidato[b1].next].prev = candidato[b1].prev;
            if (b1 != b2) {
                candidato[candidato[b2].prev].next = candidato[b2].next;
                candidato[candidato[b2].next].prev = candidato[b2].prev;
            }

            if (sobrando > 0)
                putchar(',');
            else {
                putchar('\n');
                break;
            }
        }
    }

    return 0;
}