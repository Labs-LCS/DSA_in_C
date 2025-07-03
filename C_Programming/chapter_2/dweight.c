#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
	int height, lenght, width, volume, weight;
	printf("This program calculates the dimensional weight, in pounds,\n");
	printf("of a box in the USA shipping context.\n");
	printf("Please provide the height of your package (inches): ");
	scanf("%d", &height);
	printf("Please provide the lenght of your package (inches): ");
	scanf("%d", &lenght);
	printf("Please provide the width of your package (inches): ");
	scanf("%d", &width);
	volume = height * lenght * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
	printf("Dimensions: %dx%dx%d.\n", height, lenght, width);
	printf("Volume: %d cubic inches.\n", volume);
	printf("Dimensional weight: %d pounds.\n", weight);
	return 0;
}

