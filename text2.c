#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {

	//variables
	int fnc;
	int var = 0;
	int num1;
	int num2;
	float result;

	while(var == 0) {

		printf("Enter function [1-9] ");
		scanf("%d", &fnc);

		if(fnc == 8) {
			printf("Proceeding\n");
		}
		else {
			printf("\nEnter number 1 ");
			printf("\n> ");
			scanf("%d", &num1);
			printf("\nEnter number 2 ");
			printf("\n> ");
			scanf("%d", &num2);
		}

		switch(fnc) {
			case 1:
				printf("This is function 1\n");
				result = num1 + num2;
				printf(" = %f\n", result);
				break;
			case 2:
				printf("This is function 2\n");
				result = num1 - num2;
				printf(" = %f\n", result);
				break;
			case 3:
				printf("This is function 3\n");
				result = num1 / num2;
				printf(" = %f\n", result);
				break;
			case 4:
				printf("This is function 4\n");
				result = num1 * num2;
				printf(" = %f\n", result);
				break;
			case 5:
				printf("This is function 5\n");
				result = num1 % num2;
				printf(" = %f\n", result);
				break;
			case 6:
				printf("This is function 6\n");
				result = num1 * num1;
				printf(" = %.2lf\n", result);
				break;
			case 7:
				printf("This is function 7\n");
				printf("\nunnassigned");
				break;
			case 8:
				var++;
				break;
			case 9:
				printf("This is function 9\n");
				printf(" Num1 = %d\n", num1);
				printf(" Num2 = %d\n", num2);
				break;
			default:
				printf("Invalid output\n");
		}
	}

	return 0;
}
