/**
	Arquivo:1101.c
	Implementa:soma de numeros impares e sua quantidade
	Autor:gustavo antonio martini
	Data:04/05/2021
*/ 

#include <stdio.h>

int main()
{
	int m=1,n=1,a=0,b=0,c=0;
	
	for(;n!=0 && m!=0;)
	{
		scanf("%d %d",&m,&n);
		
		if(n>0 && m>0)
		{	
			if (m<n)
			{
					m=m-n; 
					n=n+m;
					m=n-m;
			}
			for(int i=n;i<=m;i+=1)
			{	
				printf("%d ",i);
				c+=i;
	
			}
		


			printf("Sum=%d\n",c);
			c=0;
		}
		
		
	}
	
	return 0;

}
		