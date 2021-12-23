#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter the number you want to check even or odd=");
   scanf("%d",&n);
   if(n%2==0)
   {
       printf("Number you entered is even");
   }
   else
   {
       printf("Number you entered is odd");
   }
}
