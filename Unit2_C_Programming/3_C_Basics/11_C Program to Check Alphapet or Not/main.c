#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("Enter to check if alphapet or not>>>>>>\n");
    scanf("%c",&n);
    if(n>='a'&&n<='z'||n>='A'&&n<='Z')
    {
        printf("you entered alphapet");
    }
else
{
    printf("you enterd not alphapet");
}

}
