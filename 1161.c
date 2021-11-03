/**
	Arquivo:1161.c
	Implementa:soma de fatoriais
	Autor:gustavo antonio martini
	Data:28/06/2021
*/

#include <stdio.h>
int main()
{
   long long int a, n, big, bigbig;
   int i;

   while(scanf("%lld %lld", &a, &n) != EOF)
   {
      big = 1;
      bigbig = 1;
      for(i = a; i > 0; --i)
      {
         big *= a;
         a--;
      }

      for (i = n; i > 0; --i)
      {
         bigbig *= n;
         n--;
         }

      printf("%lld\n", big + bigbig);
   }

   return 0;
}