/**
	Arquivo:1088.c
	Implementa:bolhas e baldes
	Autor:gustavo antonio martini
	Data:17/06/2021
*/

#include <stdio.h>
#include <stdlib.h>




typedef long long int Tdado;
typedef unsigned Tsize;
unsigned quemganha;

void troca(Tdado *x, Tdado *y)
{
  Tdado aux = *x;
  *x =*y;
  *y = aux;
  quemganha++;
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


int main()
{
	int sim=0;
	int cont=0;
	while (scanf("%d",&sim) && sim!=0)
	{


		long long int *boobs=malloc(sizeof(long long int)*100001);
		for(;cont<sim;cont++)
		{
			scanf("%lld",&boobs[cont]);

		}
		quickSort(boobs,0,sim-1);
		if(quemganha%2==0)
		{
			printf("Carlos\n");
		}
		else
			printf("Marcelo\n");
		//printf("%u\n",quemganha);
		cont=0;
		quemganha=0;

		free(boobs);
	}


	return 0;

}
