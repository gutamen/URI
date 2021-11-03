/**
	Arquivo:1104.c
	Implementa:troca de cartas
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned Tdado;
typedef unsigned Tsize;

Tsize binSearch(Tdado e, Tdado *V, Tsize n)
{
  Tsize lo =0, hi=n-1,i=0;
  while (lo<=hi)
  {
    i=(lo+hi)/2;
    if (V[i]==e)
      return i;//achou
    if(e<V[i])
     hi=i-1;// pesquisa na metade esquerda
    else
      lo=i+1;//pesquisa na metade da direita

  }
  return  0;// pior caso, e nao existe em V
}


int main()
{   
    unsigned ali,bea;
    while (scanf("%d %d",&ali,&bea) && ali!=0 && bea!=0)
    {
        unsigned a=0,b=0,c=0;
        unsigned *ali_v=malloc(sizeof(unsigned)*ali);
        unsigned *bea_v=malloc(sizeof(unsigned)*bea);
        for (int i = 0; i < ali; i++)
        {
            scanf("%d",&ali_v[i]);
        }
        for (int i = 0; i < bea; i++)
        {
            scanf("%d",&bea_v[i]);
        }
        for(int i=0;i<ali;i++)
        {
            if(ali_v[i]==ali_v[i+1])
            {
                for (int j = i; j < ali; j++)
                {
                    ali_v[j]=ali_v[j+1];

                    
                    
                }
              ali--;
              i--;  
            }
        }
        for(int i=0;i<bea;i++)
        {
            if(bea_v[i]==bea_v[i+1])
            {
                for (int j = i; j < bea; j++)
                {
                    bea_v[j]=bea_v[j+1];

                    
                    
                }
              bea--;
              i--;  
            }
        }
        a=1;
        for(int i=0;i<ali;i++)
        {
            for (int j = 0; j < bea; j++)
            {
                if(ali_v[i]!=bea_v[j])
                {
                    for(int k=i;k<ali;k++)
                        {
                            if(ali_v[k]==bea_v[j])
                            a=0;
                        }
                }
            }
            if(a==0)
            b++;
            a=1;            
        }
        for (int i = 0; i < ali; i++)
        {
            printf("%d ", ali_v[i]);
        }
        printf("\n");
        for (int i = 0; i < bea; i++)
        {
            printf("%d ", bea_v[i]);
        }
        printf("\n");
        printf("%d\n",b);
        b=0;
    }
    


	return 0;

}
