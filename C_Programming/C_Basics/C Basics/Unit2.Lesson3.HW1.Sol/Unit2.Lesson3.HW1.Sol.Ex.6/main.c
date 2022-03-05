#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,process;
    printf("Enter a=");
    scanf("%f",&a);
    printf("Enter b=");
    scanf("%f",&b);
    process=a;
    a=b;
    b=process;
    printf(" a After Swapping= %f",a);
    printf(" \n b After Swapping= %f",b);
    return 0;
}

