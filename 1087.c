/**
	Arquivo:1087.c
	Implementa:dama
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>

int main()
{
	int x1=0,x2=0,y1=0,y2=0,i=0,j=0,a=0,b=0;

	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	while(x1!=0 && x2!=0 && y1!=0 && y2!=0)
	{
		a=0;
		if (x1==x2 && y1==y2)
			a=0;
		else
		{
			for(i=1;i<=8;i++)
			{
				for(j=1;j<=8;j++)
				{
					if((i+x1==x2 && y1==y2)||(x1-i==x2 && y1==y2))
					{
						a=1;
						break;
					}
					if((x1==x2 && y1+j==y2)||(x1==x2 && y1-j==y2))
					{
						a=1;
						break;
					}
					if((i==j&&(x1+i==x2 && y1+j==y2))||(i==j &&(x1-i==x2 && y1-j==y2))||(i==j &&(x1+i==x2 && y1-j==y2))||(i==j &&(x1-i==x2 && y1+j==y2)))
					{
						a=1;
						break;
					}
				}
			}
			if (a==0)
			{
				y1=y2;
				a=1;
				for(i=1;i<=8;i++)
				{
					for(j=1;j<=8;j++)
					{
						if((i+x1==x2 && y1==y2)||(x1-i==x2 && y1==y2))
						{
							a+=1;
							break;
						}
						if((x1==x2 && y1+j==y2)||(x1==x2 && y1-j==y2))
						{
							a+=1;
							break;
						}
					}
				}
			}
		}

		printf("%d\n",a);
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	}


	return 0;

}
