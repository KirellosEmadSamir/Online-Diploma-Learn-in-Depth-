#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//int rot(int);
int main()
{
    int r;
    double out;
    printf("Enter a Positive Number=");
    scanf("%d",&r);
    //out=rot(r) ;
    out=sqrt(r);
    printf("square root of %d is %.4lf",r,out);
    return 0;
}
/*
int rot(int t)
{
    int res;
    res= sqrt(t);
    return 0;
}
*/
