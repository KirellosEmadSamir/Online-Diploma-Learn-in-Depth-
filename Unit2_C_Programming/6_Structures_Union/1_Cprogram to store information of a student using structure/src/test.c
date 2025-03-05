/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 * main.c
 *
 *  Created on: 20/5/2023
 *      Author: Kirellos Emad Samir
 */

#include <stdio.h>
//defining a structure of a student (Name,roll and marks)
struct student {
	char name[50];
	int roll;
	float marks;
}s;
int main(){
	printf("Enter Information of The student \n\n");
	printf("Name:");
	scanf("%s",s.name);
	printf("roll:");
    scanf("%d",s.roll);
    printf("marks:");
   	scanf("%.3f",s.marks);
   	//Dispalying stored data
   	printf("--- Student Info. ---");
   	printf("Name: %s\n",s.name);
   	printf("Roll: %d\n",s.roll);
   	printf("Marks: %f\n",s.marks);
   	return 0;



}
