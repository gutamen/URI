/**
	Arquivo:1168.c
	Implementa:led
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a=0,b=0,c=0;
    scanf("%d",&a);
    for(;a>0;a--)
    {
        char *j=malloc(sizeof(char)*101);
        scanf("%s",j);
        c=strlen(j);
        getchar();
        for(int i=0;i<c;i++)
        {
            switch (j[i])
            {
            case '0':
                b+=6;
                break;
            
            case '1':
                b+=2;
                break;

            case '2':
                b+=5;
                break;
            
            case '3':
                b+=5;
                break;

            case '4':
                b+=4;
                break;

            case '5':
                b+=5;
                break;

            case '6':
                b+=6;
                break;

            case '7':
                b+=3;
                break;

            case '8':
                b+=7;
                break;

            case '9':
                b+=6;
                break;
            }
        }
        printf("%d leds\n",b);
        b=0;

    }


	return 0;

}
