/**
	Arquivo:1022.c
	Implementa:TDA RACIONAL
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>
#include <math.h>

//
// Função mdc
//
int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}


int main()
{
  int a=0,b=0,c=0,d=0,e=0,x=0,y=0,z=0,p=0;
  char j,k,l,tipo;
  scanf("%d",&a);

  do {
    scanf("%d %c %d %c %d %c %d",&b,&j,&c,&tipo,&d,&j,&e);

    if(tipo=='+')
    {
      z=c*e;
      x=(b*e)+(d*c);
      y=x/(sqrt(pow((mdc(x,z)),2)));
      p=z/(sqrt(pow((mdc(x,z)),2)));

    }

    if(tipo=='-')
    {
      z=c*e;
      x=(b*e)-(d*c);
      y=x/(sqrt(pow((mdc(x,z)),2)));
      p=z/(sqrt(pow((mdc(x,z)),2)));
    }

    if(tipo=='*')
    {
      z=c*e;
      x=b*d;
      y=x/(sqrt(pow((mdc(x,z)),2)));
      p=z/(sqrt(pow((mdc(x,z)),2)));


    }


    if(tipo=='/')
    {
      z=c*d;
      x=b*e;
      y=x/(sqrt(pow((mdc(x,z)),2)));
      p=z/(sqrt(pow((mdc(x,z)),2)));
    }

    printf("%d/%d = %d/%d\n",x,z,y,p);


    a-=1;
  } while(a>0);



	return 0;

}
