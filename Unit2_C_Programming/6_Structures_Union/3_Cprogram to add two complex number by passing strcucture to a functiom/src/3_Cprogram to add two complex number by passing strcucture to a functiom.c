/*
 ============================================================================
 Name        : 3_Cprogram.c to add to complex number
 Author      : 
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// defining a structure of two complex Numbers
typedef struct complex {
	float real;
	float comp;
}complex;

//Function to a structure holds two complex number
complex add(complex n1,complex n2);

int main() {
	complex n1,n2,temp;
	// entering the 1st distance
	printf("For 1st complex Number \n");
	printf("Enter Real and Imaginary Respectively \n");
	scanf("%f%f",&n1.real,&n1.comp);
	printf("For 2nd complex Number \n");
	printf("Enter Real and Imaginary Respectively \n");
	scanf("%f%f",&n2.real,&n2.comp);
    //Sum
    temp=add(n1,n2);
    printf("Sum=%f+%f",temp.real,temp.comp);
    return 0;
}
    //Function that added two complex number
    complex add(complex n1,complex n2)
    {
    	complex temp;
    	temp.real=n1.real+n2.real;
    	temp.comp=n1.comp+n2.comp;
    	return (temp);
    }




