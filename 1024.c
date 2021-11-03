/**
	Arquivo:1024.c
	Implementa:CRIPTROGRAFIA
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>
#include <string.h>
#define SIZE 10000
int main()
{
  char y,normal[SIZE]="",besta[SIZE]="";
  int a=0,b=0,c=0,i;

  scanf("%d\n",&a);

  do {

    scanf("%[^\n]s",normal);
    getchar();
    b=strlen(normal);

    for (i = 0; i < b; i++)
    {
      if((normal[i]>=65 && normal[i]<=90) || (normal[i]>=97 && normal[i]<=122))
      normal[i]+=3;
    }


    c=b-1;
    for (i =0; i < b/2; i++)
    {
      y=normal[c];
      normal[c]=normal[i];
      normal[i]=y;

      c--;


    }
    //printf("%s\n", normal);
    for (c=b/2; c < b; c++)
    {
      normal[c]-=1;
    }


    printf("%s\n", normal);



    a-=1;

  } while(a>0);




	return 0;

}
