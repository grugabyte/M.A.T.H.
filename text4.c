#include <stdio.h>

int main() {

	int fnc;
	printf("Enter function [1-9]\n> ");
	scanf("%d", &fnc);

	//variables for the functions:
	float b;
	float c;

	switch(fnc) {

		case 1:
			printf("Enter unit in mm:\n> ");
			scanf("%f", &b);
			c = b / 10;
			printf("mm -> cm\nAns: %f\n", c);
			break;
		case 2:
			printf("Enter unit in cm:\n> ");
			scanf("%f", &b);
			c = b / 100;
			printf("cm -> m\nAns: %f\n", c);
			break;
		case 9:
			printf("km -(x1000)-> M -(x100)-> cm -(x10)-> mm\n");
			printf("km <-(/1000)- M <-(/100)- cm <-(/10)- mm\n");
			break;
		default:
			printf("Invalid output\n");
	}

	return 0;
}
