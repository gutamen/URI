/**
	Arquivo:1.c
	Implementa:
	Autor:gustavo antonio martini
	Data:03/08/2021
*/

#include <stdio.h>

int main()
{

    int par[5],impar[5];
    int x=0,z=0,p=0,i=0;

    for (int j=0;j<15;j++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            par[p]=x;
            p++;
        }
        else
        {
            impar[i]=x;
            i++;
        }

        if(i==5)
        {
            for(int l=0;l<5;l++)
            {
                printf("impar[%d] = %d\n",l,impar[l]);

            }
            i=0;
        }
        if(p==5)
        {
            for(int l=0;l<5;l++)
            {
                printf("par[%d] = %d\n",l,par[l]);

            }
            p=0;
        }
    }
    if(i>0)
    {
        for(int l=0;l<i;l++)
        {
            printf("impar[%d] = %d\n",l,impar[l]);

        }
        i=0;
    }
    if(p>0)
    {
        for(int l=0;l<p;l++)
        {
            printf("par[%d] = %d\n",l,par[l]);

        }
        p=0;
    }
	return 0;

}
