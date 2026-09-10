/* Documentation section */
//First ever C program - Calculating area of circle
// Author : Nikhil Yadav

/* Link/preprocessor section */
#include <stdio.h>

/* Definition section */
#define PI 3.14159

/* Global Declaration */
int global_counter = 0;
float calculate_area(float radius);

/* Main Function */
int main() {
	float r = 5.0; // local variable declaration
 	float area;
	area = calculate_area(r); //Executable statement
	printf("Area: %f\n", area);
	printf("\n\n\n");

	return 0; // return statement

}

/* Subprogram / user defined functions section */
float calculate_area(float radius) {
	return PI * radius * radius;

}


