/*
 ============================================================================
 Name        : 5_CProgram to find a circle of an area
 Author      : 
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define pi 3.1415
#define area(r) (pi*(r)*(r))

int main(){
int radius;
float area;
printf("Enter the radius");
scanf("%d",&radius);
area=area(radius);
printf("Area:%f",area);
return 0;


}
