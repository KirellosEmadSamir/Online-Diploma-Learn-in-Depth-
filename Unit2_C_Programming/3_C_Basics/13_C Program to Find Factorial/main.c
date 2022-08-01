#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact=1;
    printf("Enter number to factoralize it=");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
           fact=fact*i;
        }
        printf("Factorial of %d is %d",n,fact);
    }
else
{
    printf("Error");
}
}
