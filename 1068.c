/**
	Arquivo:1068.c
	Implementa:balanco de parenteses
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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
int m=0,b=0;
Tnode* searchlist( Tdado x, TlistSE L)
{
    Tnode *aux=L.first;
    while(aux && x != aux->info)
    {
        aux=aux->next;
        m++;
    }
    return aux;
}

Tnode* searchlist2( Tdado x, TlistSE L)
{
    Tnode *aux=L.first;
    while(aux && x != aux->info)
    {
        aux=aux->next;
        b++;
    }
    return aux;
}

//remover no meio da lista
Tdado removelist(unsigned p,TlistSE *L)
{
    if (p>L->lenght)
        exit(1);
    else
    {
        // remover na posicao 0
        if(p==0)
            return removeleft(L);
        else if (p == L->lenght-1)// remove na ultima posicao
            return removeRight(L);
        else
        {
            // procurar pelo local da remocao
            Tnode *p1 =L->first,*aux;
            Tdado ret;
            unsigned i=0;
            while (++i<p)
            {
                p1=p1->next;
            }
            aux=p1->next;
            p1->next=aux->next;
            ret = aux->info;
            free(aux);
            L->lenght--;
            return ret;
        }
    }       
}
#include <string.h>


int main()
{


    char v[10000];
    int x=0,z=0;
    char k,l='a';
    //scanf("%d",&x);
    //scanf("%c",&k);
    while(scanf("%[^'\n']s", v) != EOF)
    {
        b=0;
        m=0;
        scanf("%c",&k);
        //char v[10000];
        TlistSE p;
        intitlist(&p);
        int par=0,par2=0;
        
        //if (scanf("%[^'\n']s", v) == EOF) 
            //break;
        //scanf("%c",&k);
        //gets(v);
        //if(v[0] == EOF )
            //return 0;
        for(int i=0;i<strlen(v);i++)
        {
            if(v[i]=='(' || v[i]==')')
            {
                insertRight(v[i],&p);
                if(v[i]=='(')
                    par++;
                if(v[i]==')')
                    par2++;

            }

        }
        //printlist(p);
        while(1)
        {
            if(searchlist('(',p)!=NULL && searchlist2(')',p)!=NULL)
            {
                if(b>m)
                {
                removelist(b,&p);
                removelist(m,&p);
                m=0;
                b=0;
                par--;
                par2--;
                }
                else
                {
                    while(m>b)
                    {
                        removeleft(&p);
                        m--;
                    }
                    /*removelist(m,&p);
                    removelist(b,&p);
                    m=0;
                    b=0;
                    diamante++;*/
                }
            }
                
            else
                break;
        }
        if(par2 || par)
            printf("incorrect\n");
        else
            printf("correct\n");
        deletelist(&p);
    }
	return 0;

}
