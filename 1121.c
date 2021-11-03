/**
    Arquivo:1121.c
    Implementa:robo colecionador
    Autor:gustavo antonio martini
    Data:12/05/2021
*/

#include <stdio.h>
#include <string.h>

int main()
{
 int a=0,b=0,c=0,d=0,j=0,i=0,r1=0,r2=0,r=0,q=0,fig=0,y=0;
 char matrix[500][500],comando[50002];

 while(scanf("%d %d %d",&a,&b,&c) && a!=0 && b!=0 && c!=0)
 {
        for(i=0;i<a;i++)
        {
            for(j=0;j<=b;j++)
            {
                scanf("%c",&matrix[i][j]);
                if(matrix[i][j]=='L' || matrix[i][j]=='S' || matrix[i][j]=='N' || matrix[i][j]=='O')
                {
                    r1=i;
                    r2=j;
                }
            }
        }

    getchar();
    scanf("%s",comando);
    getchar();

    
	if(matrix[r1][r2]=='O')
		r=180;
	else
	{
		if(matrix[r1][r2]=='L')
			r=0;
		else
		{
			if(matrix[r1][r2]=='S')
				r=270;
			else
			{
				if(matrix[r1][r2]=='N')
					r=90;
			}
		}
	}
  r2-=1;
    d=strlen(comando)-1;
    //r2-=1;
    for(y=0;y<=d;y++)
    {

      switch (comando[y])
      {
        case 'D':
        r-=90;
        if (r<0)
            r+=360;
        break;

        case 'E':
        r+=90;
        if (r>=360)
        {
            r-=360;
        }
        break;

        case 'F':
        if ( r==0 && r2<b-1 && (matrix[r1][r2+1]!='#'))
        {
            r2+=1;
        }
        else
        {
            if ( r==180 && r2>0 && (matrix[r1][r2-1]!='#'))
            {
                r2-=1;

            }
            else
            {
                if ( r==90 && r1>0 && (matrix[r1-1][r2]!='#'))
                {
                    r1-=1;
                }
                else
                {
                    if ( r==270 && r1<a-1 && (matrix[r1+1][r2]!='#'))
                    {
                        r1+=1;
                    }

                }
            }
        }

        if (matrix[r1][r2]=='*')
        {
            matrix[r1][r2]='-';
            fig+=1;
        }
      }
      //printf("%d %d   %d %d %c\n",r,fig,r1+1,r2+1,comando[y]);
      for (i=0;i<a;i++)
      {
        for(j=0;j<=b;j++)
        {
          printf("%c",matrix[i][j]);
        }
        printf("\n");
      }
      //printf("\n");
    }

    printf("%d\n",fig);
    fig=0;
    r=0;
  }
    return 0;
}
