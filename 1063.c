/**
	Arquivo:1063.c
	Implementa:trilhos novamente... tracando movimentos
	Autor:gustavo antonio martini
	Data:03/08/2021
*/


 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 #include <math.h>

 // define o tipo de dado dentro do node
 typedef char Tdado;

 // define o tipo de dado para o node de lista encadeada
 typedef struct Tnode
 {
     Tdado info;//dado armazenado no node
     struct Tnode *next;//ponteiro para o proximo node
 }Tnode;

 //define o node head da list
 typedef struct TlistSE
 {
     Tnode *first; // ponteiro para o primeiro elemento da lista
     unsigned lenght; // numero de elementos armazendo
     Tnode *last; // ponteiro para o ultimo elemento da lista
 }TlistSE;

 //========================================================
 // function de lista encadeada
 //========================================================

 //inicialization da lista
 void intitlist(TlistSE *L)
 {
     L->first= NULL;
     L->last = NULL;
     L->lenght= 0;
 }

 //destruicao da lista
 void deletelist(TlistSE *L)
 {
     Tnode *p=L->first;
     while (p)
     {
        L->first=L->first->next;
        free(p);
        p=L->first;
     }
     L->lenght=0;
     L->last=NULL;

 }

//impressao da lista
void printlist(TlistSE L)
{
    Tnode *p = L.first;

    printf("base<--[");
    while (p)
    {
        printf("%c",p->info);
        if(p->next)
            printf(", ");
        p=p->next;
    }
    printf("]-->topo\n");

}


//insercao a direita
short insertRight(Tdado x, TlistSE *L)
{
    Tnode *aux =(Tnode*)malloc(sizeof(Tnode));
    if(aux == NULL)
        return 1; //sinaliza erro de alocacao
    else
    {
        aux->info=x;
        aux->next=NULL;
        if(L->first==NULL)//lista vazia
            L->first=L->last=aux;//first e last o mesmo node
        else
        {
            L->last->next=aux;
            L->last=aux;
        }
        L->lenght++;
        return 0;
    }
}


// verifica lista vazia
bool emptylist(TlistSE L)
{
    return(L.lenght==0);
}

//comprimento da lista
short leghtList(TlistSE L)
{
    return(L.lenght);
}

// remocao direita
Tdado removeRight(TlistSE *L)
{
    Tnode *aux = L->last; // node a ser removido
    Tdado ret = aux ->info; // INFO DO node a ser destruido

    if(L->first==L->last)
    {
        free(aux);
        L->first=L->last=NULL;
    }
    else
    {
        L->last=L->first;
        while (L->last->next!=aux)
        {
            L->last=L->last->next;
        }
        free(aux);

        L->last->next=NULL;
    }
    L->lenght--;
    return ret;
}

char in[100], out[100];

int main()
{
    int n, tmp;
    char dump;

    scanf("%d",&n);
    do
    {
        scanf("%c",&dump);
        for(int i=0; i<(n*2)-1; i++)
            {
                scanf("%[^'\n']c",&in[i]);
            }
        scanf("%c",&dump);
       
        for(int i=0; i<(n*2)-1; i++)
            {
                scanf("%[^'\n']c",&out[i]);
            }
        scanf("%c",&dump);
        TlistSE p;
        
        
        /*for(int i=0; i<(n*2)-1; i++)
        {
            printf("%c",in[i]);
        }
        printf("\n");*/

        intitlist(&p);//inicializa a pilha
        tmp = 0;
        int i=0;
       
        for(;i<(n*2)-1; i++)
        {
            if(i%2==0)
            {
                insertRight(in[i],&p);
                printf("I");
                
            }
            
            if(i%2==0)
            {
                while (!emptylist(p) && out[tmp] == p.last->info)
                {
                    tmp+=2;
                    removeRight(&p);
                    printf("R");
                    
                }
            }
        }

        if (!emptylist(p))
            printf(" Impossible\n");
        else
            printf("\n");
       
        
    }while((scanf("%d",&n) && n!=0));

    return 0;
}