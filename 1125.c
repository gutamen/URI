/**
	Arquivo:1125.c
	Implementa:formula 1
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    unsigned valor[100];
}sistema;

typedef struct
{
    unsigned posi[100];
    unsigned ganhou[100];

}piloto;

int main()
{
    int a=0,b=0,c=0,maior=0,qmaiores=0;
    int premio,qpiloto,qsis;
    int siscasa[101];
    while (scanf("%d %d",&premio,&qpiloto) && premio!=0 && qpiloto!=0)
    {
        
        piloto *pilotos=malloc(sizeof(piloto)*(qpiloto+1));
        /*for(int i=0;i<qpiloto;i++)
        {
            pilotos[i]=i+1;
        }*/
        for(int i=0;i<premio;i++)
        {
            for(int j=0;j<qpiloto;j++)
            {
                scanf("%d",&a);
                pilotos[j].posi[i]=a;
            }
        }
        scanf("%d",&qsis);

        sistema *sistemas=malloc(sizeof(sistema)*(qsis+1));
        for(int i=0;i<qsis;i++)
        {
            scanf("%d",&siscasa[i]);
            for(int j=0;j<siscasa[i];j++)
            {
                scanf("%d",&sistemas[i].valor[j]);
            }

        }
        for(int i=0;i<qpiloto;i++)
        {
            for(int j=0;j<100;j++)
            pilotos[i].ganhou[j]=0;
        }
        for(int i=0;i<qsis;i++)
        {
            for(int j=0;j<premio;j++)
            {
                for(int k=0;k<siscasa[i];k++)
                {
                    for(int y=0;y<qpiloto;y++)
                    {
                        if(pilotos[y].posi[j]==k+1)
                        pilotos[y].ganhou[i]+=sistemas[i].valor[k];
                    }
                }
            }
            for(int j=0;j<qpiloto;j++)
            {
                
                if(pilotos[j].ganhou[i]>=maior)
                {
                maior=pilotos[j].ganhou[i];
                }
            }
            for(int j=0;j<qpiloto;j++)
            {
                if(pilotos[j].ganhou[i]==maior)
                    qmaiores+=1;
            }
            for(int j=0;j<qpiloto;j++)
            {
                if(pilotos[j].ganhou[i]==maior)
                {
                    printf("%d",j+1);
                    if(qmaiores>1)
                    {
                        printf(" ");
                        qmaiores-=1;
                    }
                }
            }

            printf("\n");
            
            qmaiores=0;
            maior=0;
        }


    }
    


	return 0;

}
