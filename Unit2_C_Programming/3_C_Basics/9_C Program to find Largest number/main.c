#include <stdio.h>
#include <stdlib.h>

int main()
{
   float m,n,o;
   printf("___________________________________");
   printf("Now you will Enter three numbers ");
    printf("___________________________________\n");
   printf("First Number=");
   scanf("%f",&m);
   printf("Second Number=");
   scanf("%f",&n);
   printf("Third Number=");
   scanf("%f",&o);
   if(m>=n&&m>=o)
   {
       printf("%f is the largest",m);
   }
   if(n>=m&&n>=o)
   {
       printf("%f is the largest",n);
   }
   if(o>=m&&o>=n)
   {
       printf("%f is the largest",o);
   }

}
