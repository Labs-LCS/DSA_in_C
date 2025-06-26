/* 
 * Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
 * mula v = 4/3π*r^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-
 * pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
 * twice to compute r^3.
 * */

#include <stdio.h>

int main(void) {
	float r;
	printf("Let's calculate the volume of a sphere.\nPlease provide the radius: ");
	scanf("%f", &r);
	printf("This is the volume of a 10-meter radius sphere: %.2fπ^3\n", r*r*r*4.0f/3.0f);
	return 0;
}
