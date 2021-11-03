/**
	Arquivo:1028.c
	Implementa:
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>

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
	int a=0,b=0,c=0,d=0;

	scanf("%d",&a);
	do
	{
		scanf("%d %d",&b,&c);

		printf("%d\n",mdc(b,c) );

		a-=1;
	} while(a>0);



	return 0;

}
