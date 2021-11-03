/**
	Arquivo:1140.c
	Implementa:flores florescem da franca
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    while (1)
    {
        int a=0,b=0,c=0;
        char *frase=malloc(sizeof(char)*1020);
        gets(frase);
        if(frase[0]=='*')
            break;
        a=strlen(frase);
        //printf("%d",&a);
        b=1;
        for(int i=0;i<1020;i++)
        {
            if(frase[i]==' ')
            {
                if(toupper(frase[i+1])!=toupper(frase[0]))
                {
                    b=0;
                }

            }
        }
        /*for(int i=0;i<50;i++)
            printf("%c",frase[i]);
        printf("\n");*/
        if(b==0)
            printf("N\n");
        else
            printf("Y\n");
        
    }
    


	return 0;

}
