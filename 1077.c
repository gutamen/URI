/**
	Arquivo:1077.c
	Implementa:infixa para posfixa
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



typedef struct node{

	char caractere;
	struct node *proximo;

} node;

typedef struct pilha{

	node *topo;

} pilha;

char top(pilha *);
void pop(pilha *);
void stack(pilha *);
void procedimento(char *);
void push(pilha *, char );
int primeiro(char , char );

void procedimento(char *expressao)
{

	int i = 0;
	char c, t;
	pilha pilha;
	stack(&pilha);
	push(&pilha, '(');

	do
	{

		c = expressao[i];
		++i;

		if (c >= 'A' && c <= 'Z' || c >= '0' && c <= '9' || c >= 'a' && c <= 'z')
			printf("%c", c);
		else if (c == '(')
			push(&pilha, '(');
		else if (c == ')' || c == '\0')
		{

			do
			{

				t = top(&pilha);
				pop(&pilha);
				if (t != '(')
					printf("%c", t);

			} while (t != '(');

		}
		else if (c == '+' || c == '-' || c == '*' || c == '^' || c == '/')
		{

			while (true)
			{

				t = top(&pilha);
				pop(&pilha);
				if (primeiro(c, t))
				{

					push(&pilha, t), push(&pilha, c);
					break;

				}
				else
					printf("%c", t);
			}

		}

	} while (c != '\0');

	printf("\n");

}

void stack(pilha *pilha)
{

	pilha->topo = NULL;

}

void push(pilha *pilha, char caractere)
{

	node *auxiliar;
	auxiliar = (node *) malloc(sizeof(node));

	if (!auxiliar)
		exit(1);

	auxiliar->proximo = pilha->topo;
	pilha->topo = auxiliar;
	auxiliar->caractere = caractere;

}

void pop(pilha *pilha)
{

	node *auxiliar;
	auxiliar = pilha->topo;

	if (auxiliar)
	{

		pilha->topo = auxiliar->proximo;
		free(auxiliar);

	}

}

char top(pilha *pilha)
{

	return (pilha->topo->caractere);

}

int primeiro(char c, char t)
{

	int pc, pt;

	if (c == '^')
		pc = 3;
	else if (c == '*' || c == '/')
		pc = 2;
	else if (c == '+' || c == '-')
		pc = 1;
	else if (c == '(')
		pc = 4;

	if (t == '^')
		pt = 3;
	else if (t == '*' || t == '/')
		pt = 2;
	else if (t == '+' || t == '-')
		pt = 1;
	else if (t == '(')
		pt = 0;

	return (pc > pt);

}

int main ()
{

	char expressao[400];
	unsigned short cases;

	scanf("%hu", &cases);

	while (cases--)
	{

		scanf("%s", expressao);
		procedimento(expressao);

	}
    return 0;

}