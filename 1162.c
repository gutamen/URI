/**
	Arquivo:1162.c
	Implementa:organizador de vagoes
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
unsigned quanti=0;
typedef unsigned Tsize;
typedef unsigned Tdado;
// fucao para trocar valor entre duas variaveis
void troca(Tdado *x, Tdado *y)
{
  Tdado aux = *x;
  *x =*y;
  *y = aux;
  quanti++;
}

//funcao de particao para o quickSort
int partition(Tdado *V,Tsize lo,Tsize hi)
{
  Tsize pivo=V[(lo+hi)/2];// o pivo e o elemento central
  Tsize i=lo-1,j=hi+1;
  while(1)
  {
    do
    {
      i++;
    }while (V[i]<pivo);
    do {
      j--;
    } while(V[j]>pivo);
    if (i>=j)
      return j;
    troca(&V[i],&V[j]);
  }
}

// funcao de ordenacao pelo metode de permutacao (bubble)
void bubbleSort(Tdado *dados,Tsize n)
{
  for(Tsize i=0;i< (n-1);i++)
    for (Tsize j=(n-1);j>i;j--)
      if (dados[j]< dados [j-1])
        troca(&dados[j], &dados[j-1]);
}

//fucao quickSort
void quickSort(Tdado *V,Tsize lo,Tsize hi)
{
  if(lo<hi)
  {
    int pivo=partition(V,lo,hi);
    quickSort(V,lo,pivo);
    quickSort(V,pivo+1,hi);
  }
}

int main ()
{

	unsigned M, tamanho;
	unsigned i;

	scanf("%u", &M);

	while (M--)
	{

		scanf("%u", &tamanho);
		int pedacu[tamanho];

		for (i = 0; i < tamanho; i++)
			scanf("%d", &pedacu[i]);

		bubbleSort(pedacu,tamanho);
		printf("Optimal train swapping takes %u swaps.\n", quanti);
		quanti=0;

	}
	return 0;
}