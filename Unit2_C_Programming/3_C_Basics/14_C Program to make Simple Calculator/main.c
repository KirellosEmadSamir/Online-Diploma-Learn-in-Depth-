#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oper;
    float m,n;
    printf("-------(Operation),First number ,second number-------\n");
    printf("Operation=");
    scanf("%c",&oper);
    printf("First number=");
    scanf("%f",&m);
    printf("Second number=");
    scanf("%f",&n);
    switch (oper)
    {
    case'+':
        printf("Sum of %f+%f=%f",m,n,n+m);
        break;
    case'-':
        printf("Sum of %f-%f=%f",m,n,n-m);
        break;
    case'*':
        printf("Sum of %f*%f=%f",m,n,n*m);
        break;
    case'/':
        printf("Sum of %f/%f=%f",m,n,n/m);
        break;
    default:
        printf("There is a problem try again");

    }
    return 0;
}
