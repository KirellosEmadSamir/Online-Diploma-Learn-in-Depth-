#include <stdio.h>
int reverse(int);
int main() {
    int n,res;
    printf("Enter number u want to reverse: ");
    scanf("%d", &n);
    res=reverse(n);
    printf("\nNumber After Reverse is= %d", res);
    return 0;
}
int reverse(int k)
{

   static int  r= 0;
    if(k == 0)
        return 0;
        r= r*10;
        r = k % 10 + r;
       reverse(k/10) ;
        return r ;

}
