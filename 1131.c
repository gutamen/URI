/**
	Arquivo:1.c
	Implementa:
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int g=0,i=0,e=0,Q=0,K=0,I=0,G=0;
	
	for(;K!=2;)
	{
		scanf("%d %d",&i,&g);
		
		if (i>g)
			I+=1;
		if(g>i)
			G+=1;
		if(i==g)
			e+=1;
		Q+=1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&K);
		
	}
	
	printf("%d grenais\n",Q);
	printf("Inter:%d\n",I);
	printf("Gremio:%d\n",G);
	printf("Empates:%d\n",e);
	if (I>G)
		printf("Inter venceu mais\n");
	if(G>I)
		printf("Gremio venceu mais\n");
			


	return 0;

}