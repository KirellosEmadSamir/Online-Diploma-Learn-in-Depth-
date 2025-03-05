/*
 ============================================================================
 Name        :
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>

int main() {
	int m=29; // Declare an integer Variable
	int*p= &m;   // Declare a pointer to the integer variable and assign the address of the variable to it
	printf("Value of m = %d \n",m);
	printf("Content of P=%d \n ",*p); //print the value of m using pointer
	*p=20;   // change the value of m using the pointer
	printf("Value of m is now = %d \n",m);
	return 0 ;
}
