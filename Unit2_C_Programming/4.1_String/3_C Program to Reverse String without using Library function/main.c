#include <stdio.h>
#include <stdlib.h>
int main()
{
    char acData[100]= {0}, Temp = 0;
    int iLoop =0, iLen = 0;
    printf("\nEnter the string :");
    gets(acData);
    // calculate length of string
    while(acData[iLen++] != '\0');
    //Remove the null character
    iLen--;
    //Array index start from 0 to (length -1)
    iLen--;
    while (iLoop < iLen)
    {
        Temp = acData[iLoop];
        acData[iLoop] = acData[iLen];
        acData[iLen] = Temp;
        iLoop++;
        iLen--;
    }
    printf("\n\nReverse string is : %s\n\n",acData);
    return 0;
}
