// Write a program that uses printf to display the following picture on the screen:
//        
//       *
//      *
// *   *
//  * *
//   *

#include <stdio.h>

int main(void)
{
	int lines;

	printf("This program draws a checkmark.\n");
	printf("You can chose the size of it.\n");
	printf("Please provide the number of lines the checkmark should have: ");
	scanf("%d", &lines);

	if ( lines / 2 == 0 ) {
		for (int lines_left = lines; lines_left > 0; lines_left--) {
			for (int spaces = 0; spaces < lines_left; spaces++) {
				if (spaces == lines) {
					printf("*");
				} else {
					printf(".");
				}
			}
		}
		return 0;
	} else {
		return 0;	
	}
}	
