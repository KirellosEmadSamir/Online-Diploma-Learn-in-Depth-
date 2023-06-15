/*
 ============================================================================
 Name        : 3_C.c
 Author      : Kirellos Emad Samir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	int i=0;
	char str[100] ;
	char rstr[100];
	char *p;
	printf("Enter the string you want to reverse\n");
	fgets(str,100,stdin); // read input string from user

	//Remove newline character from the end of the string
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1]='\0';
	}

	//copy the string to a new array in reverse order
	int len = strlen(str);
	p=str+len-1;
	for(i=0;i<len;i++)
	{
		rstr[i]=*p;
		p--;
	}
    printf("Reversed string is :%s \n",rstr);

	return 0;
}
