#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter a=");
    scanf("%f",&a);
    printf("Enter b=");
    scanf("%f",&b);
    c=a+b;
    a=c-a;
    b=c-b;
      printf(" a After Swapping= %f",a);
    printf(" \n b After Swapping= %f",b);
    return 0;

}
