/**
	Arquivo:1030.c
	Implementa:A Lenda de Flavious Josephus
	Autor:gustavo antonio martini
	Data:03/08/2021
*/

#include <stdio.h>

unsigned short recorrencia(unsigned short qtsSoldados, unsigned short qtsPulos);

void main ()
{

    unsigned casos;
    unsigned qtsInstancias;
    unsigned qtsSoldados, qtsPulos;

    scanf("%u", &casos);

    qtsInstancias = 0;
    while (casos--)
    {

        scanf("%u %u", &qtsSoldados, &qtsPulos);
        printf("Case %u: %u\n", ++qtsInstancias, recorrencia(qtsSoldados, qtsPulos) + 1);

    }


}

unsigned short recorrencia(unsigned short qtsSoldados, unsigned short qtsPulos)
{

    unsigned short i, retorno;
    retorno = 0;

    for (i = 2; i <= qtsSoldados; i++)
        retorno = (retorno + qtsPulos) % i;

    return retorno;

}