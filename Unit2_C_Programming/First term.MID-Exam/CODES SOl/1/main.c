#include <stdio.h>
#include <stdlib.h>
int add(int );
int main()
{
    int n,res ;
    printf("Enter a pos. Number=");
    scanf("%d",&n);
    res= add(n);
    printf("Sum Of digits is %d",res);
    return 0;
}
int add(int k)
{
    int sum;
    if(k==0)
    return 0;
    sum=(k%10)+add(k/10);

}
