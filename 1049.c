/**
	Arquivo:1049.c
	Implementa:animais divididos
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>
#include <string.h>

int main()
{
	char a[21],b[21],c[21];
	
	scanf("%s %s %s",a,b,c);
	if (!strcmp(a,"vertebrado") && !strcmp(b,"ave") && !strcmp(c,"carnivoro"))
	printf("aguia\n");
	if (!strcmp(a,"vertebrado") && !strcmp(b,"ave") && !strcmp(c,"onivoro"))
	printf("pomba\n");
	if (!strcmp(a,"vertebrado") && !strcmp(b,"mamifero") && !strcmp(c,"onivoro"))
	printf("homem\n");
	if (!strcmp(a,"vertebrado") && !strcmp(b,"mamifero") && !strcmp(c,"herbivoro"))
	printf("vaca\n");
	if (!strcmp(a,"invertebrado") && !strcmp(b,"inseto") && !strcmp(c,"hematofago"))
	printf("pulga\n");
	if (!strcmp(a,"invertebrado") && !strcmp(b,"inseto") && !strcmp(c,"herbivoro"))
	printf("lagarta\n");
	if (!strcmp(a,"invertebrado") && !strcmp(b,"anelideo") && !strcmp(c,"hematofago"))
	printf("sanguessuga\n");
	if (!strcmp(a,"invertebrado") && !strcmp(b,"anelideo") && !strcmp(c,"onivoro"))
	printf("minhoca\n");
	
	return 0;
}