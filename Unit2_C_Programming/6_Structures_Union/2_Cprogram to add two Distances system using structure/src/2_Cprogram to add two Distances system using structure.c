/*
 ============================================================================
 Name        : 2_Cprogram to add two distances using structure
 Author      : 
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// defining a structure to store the distances in inch and feet
struct distance{
	int feet;
	float inch;
}d1,d2,sum;

int main() {
	// entering the 1st distance
	printf("Enter the 1st distance\n");
	printf("Feet = ");
	scanf("%d",&d1.feet);
	printf("Inch = ");
    scanf("%f",&d1.inch);
	// entering the 2nd distance
	printf("Enter the 2nd distance\n");
	printf("Feet = ");
	scanf("%d",&d2.feet);
	printf("Inch = ");
    scanf("%f",&d2.inch);
    //Sum of Feet and Inch
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

    // if inch is greater than 12 , convert it to feet
    if(sum.inch>12.0)
    {
    	sum.inch-=12.0;
    	++sum.feet;
    }
    printf("Sum of Feet= %d \n Sum of Inch= %f",sum.feet,sum.inch);
    return 0;

}
