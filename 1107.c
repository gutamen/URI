
#include <stdio.h>



int main()
{
    int a, c, quantidade=0,quantidade1=0, x=-1;
    int pontos[100000];
    while (scanf("%d %d", &a, &c) && a!=0 && c!=0)
    {

        for(int b=0;b<c;b++)
          scanf("%d",&pontos[b]);
        for(int i=0;i<c;i++)
        { 
          for(int j=a-1;j>=0;j--)
          {

              if(pontos[i]<a-x)
                quantidade+=1;
              if(i==c-1)
                quantidade1+=c-quantidade;
              quantidade=0;
              printf("%d\n", quantidade1);
          }
        }

          printf("%d\n", quantidade1);
          quantidade1=0;
      }



    return 0;
}
