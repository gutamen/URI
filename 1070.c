/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0,b=0;
    scanf("%d",&x);
    if (x%2==0)
    {
        x+=1;
        for (int i=0;i!=6;i++)
        {
        printf("%d\n",x);
        x+=2;
        }
    }
    else
    {
        for (int i=0;i!=6;i++)
        {
        printf("%d\n",x);
        x+=2; 
		  }    
    }
    return 0;
}
