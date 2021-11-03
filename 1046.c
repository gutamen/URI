/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{  int a,b,c;
   scanf("%d %d",&a,&b);
   if (a-b>=0)
   {
   	c=24-a+b;   
   }
	if (a-b<0)	
	{
		c=(a-b)*-1;
	}
    printf("O JOGO DUROU %d HORA(S)\n",c);

    return 0;
}
