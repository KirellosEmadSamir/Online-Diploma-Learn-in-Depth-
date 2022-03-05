#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n;
    printf("Enter the number you want to check positive or negative or zero=");
    scanf("%f",&n);
    if(n>=0)
    {
        printf("Number is positive");
    }
    else if(n<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Zero");
    }
}
