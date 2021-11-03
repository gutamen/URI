/**
	Arquivo:1025.c
	Implementa:onde esta o marmore
	Autor:gustavo antonio martini
	Data:28/06/2021
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int comparamento(const void *a, const void *b);
bool procurando(unsigned *, unsigned, unsigned short);
int posicionamento;

void main ()
{

    unsigned short i, qtsCases;
    unsigned short qtsConsultas;
    unsigned qtsMarmores, numero;

    while (true)
    {

        scanf("%u %hu", &qtsMarmores, &qtsConsultas);

        if (qtsConsultas == 0 && qtsMarmores == 0)
            break;

        unsigned marmores[qtsMarmores];

        for (i = 0; i < qtsMarmores; i++)
            scanf("%u", &marmores[i]);

        qsort(marmores, qtsMarmores, sizeof(unsigned), comparamento);

        printf("CASE# %u:\n", ++qtsCases);
        while (qtsConsultas--)
        {

            scanf("%u", &numero);

            if (procurando(marmores, numero, qtsMarmores))
            {

                if (marmores[posicionamento - 1] == marmores[posicionamento])
                {
                    while (marmores[posicionamento - 1] == marmores[posicionamento])
                        posicionamento--;

                    printf("%u found at %u\n", numero, posicionamento + 1);

                }
                else
                    printf("%u found at %u\n", numero, posicionamento + 1);

            }
            else
                printf("%u not found\n", numero);

        }

    }

}

// Função de comparamentoção para o qsort;
int comparamento(const void *a, const void *b)
{

    if (*(unsigned*)a == *(unsigned *)b)
        return 0;
    else if (*(unsigned*)a > *(unsigned*)b)
        return 1;
    else
        return -1;

}

// Função implementa procurando binária;
bool procurando(unsigned *marmores, unsigned numero, unsigned short tam)
{

	int inicio, fim, meio;
	inicio = 0;
	fim = tam - 1;

	while(inicio <= fim)

	{
		meio = (inicio + fim) / 2;
		if (marmores[meio] < numero)
			inicio = meio + 1;
		else if(marmores[meio] > numero)
			fim = meio - 1;
		else
		{
			posicionamento = meio;
			return true;
		}

	}

	return false;
}