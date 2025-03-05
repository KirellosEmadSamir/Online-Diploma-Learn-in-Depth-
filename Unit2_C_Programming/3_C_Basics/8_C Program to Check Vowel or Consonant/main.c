#include <stdio.h>
#include <stdlib.h>

int main()
{
   char n;
   printf("Enter the Letter you want to check Vowel or Constant>>");
   scanf("%c",&n);
   if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
   {
       printf("Letter is vowel");
   }
   else
   {
       printf("Letter constant");
   }
}
