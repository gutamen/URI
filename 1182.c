/**
	Arquivo:1182.c
	Implementa:coluna
	Autor:gustavo antonio martini
	Data:09/08/2021
*/

#include <stdio.h>

int main()
{
    float M[12][12],sum=0,med=0;
    int x=0,y=0,z=0;
    char c;
    scanf("%d",&x);
    scanf("%c",&c);
    scanf("%c",&c);

    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%f",&M[i][j]);



            /*for(int i=0;i<12;i++)
            {
            for(int j=0;j<12;j++)
            {
                if(j-i<0)
                {
                    sum+=M[i][j];

                }
            }
            }
        printf("%f",sum);*/
    switch (c)
    {
    case 'S':
        for(int i=0;i<12;i++)

            for(int j=0;j<12;j++)
                if(x==j)
                {
                    sum+=M[i][j];

                }
        printf("%.1f\n",sum);
        break;

    case 'M':
        for(int i=0;i<12;i++)
            for(int j=0;j<12;j++)
            {
                if(x==j)
                {
                    sum+=M[i][j];
                    med=sum/12.0;
                }
            }
        printf("%.1f\n",med);
        break;    
    default:
        break;
    }

	return 0;

}
