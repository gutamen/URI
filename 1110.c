/**
	Arquivo:1110.c
	Implementa:jogando cartas fora
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

 // define o tipo de dado dentro do node
 typedef int Tdado;

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

 //insercao a esquerda
short insertLeft(Tdado x, TlistSE *L)
{
    Tnode *aux;
    aux= (Tnode*)malloc(sizeof(Tnode));
    if(aux==NULL)
        return 1; // retorna 1 sinalizando falha na alocacao
                  // lista orginal intacta
    else
    {
        aux->info = x; // insere o valor de x no node
        aux->next = L->first; // insere o novo elemento antes do atual primeiro
        L->first = aux; // aux passa ser o primeiro
        if (L->last==NULL) // ajusta o ultimo
            L->last= aux;
        L->lenght++; // incrementa o numero de elementos
        return 0;
    }
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

//impressao da lista
void printlist(TlistSE L)
{
    Tnode *p = L.first;

    
    while (p)
    {
        printf("%d",p->info);
        if(p->next)
            printf(", ");
        p=p->next;
    }
    printf("\n");

}


//comprimento da lista
short leghtList(TlistSE L)
{
    return(L.lenght);
}

//remocao esquerda
Tdado removeleft(TlistSE *L)
{
    Tnode *aux = L->first;// node a ser removido
    Tdado Ret =aux->info; // info do dado a ser removido
    L->first=L->first->next;
    free(aux);
    L->lenght--;
    if(L->lenght==0)//lista vazia
        L->last=NULL;
    return Ret;
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




int main()
{


    int j[50],k[50];
    int x=0,z=0;

    while(scanf("%d",&x) && x)
    {
        TlistSE p,d;
        intitlist(&p);
        intitlist(&d);
        for(int i=1;i<=x;i++)
            insertRight(i,&p);
        while(leghtList(p)>1)
        {
            insertRight(p.first->info,&d);
            removeleft(&p);
            insertRight(p.first->info,&p);
            removeleft(&p);
        }
        printf("Discarded cards: ");
        printlist(d);
        printf("Remaining card: %d\n",p.last->info);
        deletelist(&p);
        deletelist(&d);

    }
	return 0;

}
