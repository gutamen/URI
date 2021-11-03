/**
	Arquivo:1149.c
	Implementa:somando inteiros consecutivos
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int a,n,b=0,c=0,d=0,i=0;
	scanf("%d",&a);
	do
	{
		scanf("%d",&n);
	}
	while(n<=0);
	
	while(i<=n-1)
	{
		c+=i;
		//printf("%d %d\n",c,i);
		i+=1;
	}
	a*=(i);
	d=c+a;
	printf("%d\n",d);
		


	return 0;

}