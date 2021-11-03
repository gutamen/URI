/**
	Arquivo:1103.c
	Implementa:despertador
	Autor:gustavo antonio martini
	Data:04/05/2021
*/

#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0,i=0;

	while(scanf("%d %d %d %d",&a,&b,&c,&d) && (a>0 || b>0 || c>0 || d>0))
	{
		b=b+a*60;
		d=d+c*60;
		if(d<b)
			printf("%d\n",(d+1440)-b);
		else
			printf("%d\n",d-b);
	}




	return 0;

}
