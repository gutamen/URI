/**
	Arquivo:1124.c
	Implementa:elevador
	Autor:gustavo antonio martini
	Data:12/05/2021
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a=0,b=0,l=0,c=0,r1=0,r2=0,r11,r22;
	int esau1=0, esau2=0,quad1=0,quad2=0;
	double hip1=0, hip2=0;

	while(scanf("%d %d %d %d",&l,&c,&r11,&r22) && l!=0 && c!=0 && r11!=0 && r22!=0)
	{

		r1=2*r11;
		r2=2*r22;
		hip2=(r11+r22)*sqrt(2)/2;
		hip1=hip2+r22+r11;
		if(r1<=l && r1<=c)
		{
			esau1=l-r1;
			esau2=c-r1;
			a+=1;
		}
		if((esau1>=r2 && c>=r2) || (esau2>=r2 && r2<=l))
		{
			a+=1;
		}
		printf("%lf %lf\n",hip1, hip2);
		if(a==2)
		{
			printf("S\n");
			a=0;
		}
		else
		{
		printf("N\n");
		a=0;
	  }
	}


	return 0;

}
