/**
	Arquivo:1064.c
	Implementa:positivos e media
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{ 
	float m,a;
	int q;
	for (int i=0; i!=6; i++)
	{
		scanf("%f",&a);
		if (a>0)
		{	
		m+=a;
		q+=1;
		}
	}
	
	m/=q;
	printf("%d valores positivos\n%.1f\n",q,m);

		
	
	return 0;
}