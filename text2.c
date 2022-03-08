#include <stdio.h>

int main() {

	int fnc;

	printf("Enter function [1-9] ");
	scanf("%d", &fnc);

	int num1;
	int num2;

	printf("\nEnter number 1 ");
	printf("\n> ");
	scanf("%d", &num1);
	printf("\nEnter number 2 ");
	printf("\n> ");
	scanf("%d", &num2);

	switch(fnc) {
		case 1:
			printf("This is function 1\n");
			int result1 = num1 + num2;
			printf(" = %d\n", result1);
			break;
		case 2:
			printf("This is function 2\n");
			int result2 = num1 - num2;
			printf(" = %d\n", result2);
			break;
		case 3:
			printf("This is function 3\n");
			int result3 = num1 / num2;
			printf(" = %d\n", result3);
			break;
		case 4:
			printf("This is function 4\n");
			int result4 = num1 * num2;
			printf(" = %d\n", result4);
			break;
		case 5:
			printf("This is function 5\n");
			printf("\nunnassigned");
			break;
		case 6:
			printf("This is function 6\n");
			printf("\nunnassigned");
			break;
		case 7:
			printf("This is function 7\n");
			printf("\nunnassigned");
			break;
		case 8:
			printf("This is function 8\n");
			printf("\nunnassigned");
			break;
		case 9:
			printf("This is function 9\n");
			printf("\nunnassigned");
			break;
		default:
			printf("Invalid output\n");
	}
	return 0;
}
