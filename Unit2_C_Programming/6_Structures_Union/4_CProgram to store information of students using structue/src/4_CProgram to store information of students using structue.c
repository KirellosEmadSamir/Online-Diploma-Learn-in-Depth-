/*
 ============================================================================
 Name        : 4_CProgram to store information of students using structure
 Author      : 
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
//defining a structure of a student (Name,roll and marks)
struct student {
	char name[50];
	int roll;
	float marks;
};
int main(){
	struct student s[10];
	int i;
	printf("Enter Information of The student \n\n");
	for(i=0;i<10;++i){
		s[i].roll=i+1;
		printf("for roll %d\n",s[i].roll);
		printf("Name:");
		scanf("%s",s[i].name);
		printf("marks:");
     	scanf("%f",s[i].marks);
     	printf("\n");
	}
	printf("Diplaying information of students\n");
	for(i=0;i<10;++i){
		printf("Information for roll number %d :\n",i+1);
		printf("Name:");
		puts(s[i].name);
		printf("Marks:%f",s[i].marks);
		}

    return 0;
}
