/**
	Arquivo:1061.c
	Implementa:dia do evento
	Autor:gustavo antonio martini
	Data:27/04/2021
*/ 

#include <stdio.h>

int main()
{  
	int h1,h2,m1,m2,s1,s2,h3,m3,s3;
	int da,db,dc;
	char m[5];
	scanf("%s %d",m,&da); 
   scanf("%d %s %d %s %d",&h1,m,&m1,m,&s1);
	scanf("%s %d",m,&db);
   scanf("%d %s %d %s %d",&h2,m,&m2,m,&s2);

	s1=(da*86400)+(h1*3600)+(m1*60)+s1;
	s2=(db*86400)+(h2*3600)+(m2*60)+s2;


	dc=((s1-s2)*-1)/86400;
	h3=((s1-s2)*-1)%86400;
	m3=h3%3600;
	h3=h3/3600;
	s3=m3%60;
	m3=m3/60;

	
 
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dc,h3,m3,s3);
    return 0;
}