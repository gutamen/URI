/**
	Arquivo:1026.c
	Implementa:carrega ou nao carrega
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>
#include <math.h>
#define SIZE 33


int main()
{
  unsigned int a=0,b=0,c=0;
  while (scanf("%u %u",&a,&b)!=EOF)
  {


    c=a^b;

    printf("%u\n",c);
  }


    return 0;

}
