/**
	Arquivo:1120.c
	Implementa:revisao de contrato
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define  SIZE 10000


int main ()
{
  char d, x[SIZE];
  int a, i, j;

  scanf("%c", &d);
  scanf("%s", x);

  while (d!= '0')
  {
    a = strlen(x);
    for (i = 0; i < a; i++)
	{
      if (x[i] == d)
	  {
        for (j = i; j < a; j++)
          x[j] = x[j+1];
        x[a-1] = 0;
        a--;
        i--;
      }
    }

    for (i = 0; i < a-1; i++)
	{
      if (x[i] == '0')
	  {
        for (j = i; j < a; j++)
          x[j] = x[j+1];
        x[a-1] = 0;
        a--;
        i--;
      }
	  else
        break;
    }

    if (a == 0)
	{
      x[0] = '0';
      x[1] = '\0';
    }

    printf("%s\n", x);



    scanf(" %c", &d);
    scanf("%s", x);
  }
  return 0;
}
