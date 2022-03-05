#include <stdio.h>
#include <stdlib.h>
int couunting(unsigned int);
int main()
{
    unsigned int n,res;
    printf("Enter a Decimal Number:");
    scanf("%d",&n);
    res=couunting(n);
    printf("Number of One's in %d is %d",n,res);
    return 0;
}
int couunting(unsigned int k)
{
   unsigned int count=0;
    while(k)
    {
        k=k&(k-1);
        count++;
    }
        return count;
}
