/**
	Arquivo:1023.c
	Implementa:
	Autor:gustavo antonio martini
	Data:17/06/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int gasto_medio;
    int animal;
    int gasto;
} house;


int exchange(const void *a, const void *b)
{
   return (*(int *) a - *(int *) b);
}

int main()
{
	int qcasa,cidade=0,i,animaltemp=0,gastototal=0,animaltotal=0;
	double gastomedio;
	while(scanf("%d",&qcasa) && qcasa!=0)
	{
		house *casa = malloc(sizeof(house)*1000001);
		cidade++;
		gastototal=0;
		animaltotal=0;
		for(i=0; i<qcasa; i++)
		{
			scanf("%d %d",&casa[i].animal,&casa[i].gasto);
	  	casa[i].gasto_medio=(int)casa[i].gasto/casa[i].animal;
	  	gastototal+=casa[i].gasto;
	  	animaltotal+=casa[i].animal;
	 	}
	 	qsort(casa, qcasa, sizeof(house), exchange);
	 	printf("Cidade# %d:\n",cidade);
	 	for(i=0; i<qcasa; i++)
	 	{
	 		if(casa[i].gasto_medio==casa[i+1].gasto_medio)
			{
	  		animaltemp+= casa[i].animal;
	  		}
			else
			{
	   			if(i<qcasa-1)
		 		{
	   				printf("%d-%d ",animaltemp+casa[i].animal,casa[i].gasto_medio);
	    			animaltemp=0;
	   			}
		 		else
		 		{
	   				printf("%d-%d\n",animaltemp+casa[i].animal,casa[i].gasto_medio);
	    			animaltemp=0;
	   			}
	  		}
	 	}
	      gastomedio=(double)gastototal/animaltotal;
	      printf("Consumo medio: %.2lf m3.\n",(floorf(gastomedio*100))/100);
	      gastomedio=0;
		  free(casa);
	}


	return 0;

}
