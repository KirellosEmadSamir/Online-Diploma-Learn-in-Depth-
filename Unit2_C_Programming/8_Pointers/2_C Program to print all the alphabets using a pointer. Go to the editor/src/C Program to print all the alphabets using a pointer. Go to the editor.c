/*
 ============================================================================
 Name        : .c
 Author      : Kirellos Emad Samir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	int x;
	char arr[26];
    char  *p=arr;
    for(x=0;x<26;x++)
    {
    	*p=x+'A';
    	p++;
    }
    p=arr;
    printf("Alphabets: \n");
    for(x=0;x<26;x++)
    {
    	printf("%c \t",*p);
    	p++;

    }
    printf("\n\n");
	return 0;
}
