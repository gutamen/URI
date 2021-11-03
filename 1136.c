/**
	Arquivo:1136.c
	Implementa:bingo
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,B,aux;
    char list;
    while (scanf("%d %d",&N,&B) && N!=0 && B!=0)
    {
        int *b=malloc(sizeof(int)*100);
        for(int i=0;i<B;i++)
            scanf("%d",&b[i]);
        
    
    int *dif=malloc(sizeof(int)*100);
    dif[0] = 1;
        for (int i = 0; i < B; i++) 
        {
            for (int j = i + 1; j < B; j++) 
            {
                aux = b[i] - b[j];
                aux = (aux < 0? -aux : aux);
                dif[aux] = 1;
            }
        }
        list = 'Y';
        for (int i = 0; i <= N; i++) 
        {
            if (!dif[i]) 
            {
                list = 'N';
                break;
            }
        }
        printf("%c\n", list);
    }
    


	return 0;

}
