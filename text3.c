#include <stdio.h>
#include <math.h> 

//	  __ _ _ __ _   _  __ _ 
//	 / _` | '__| | | |/ _` |
//	| (_| | |  | |_| | (_| |
//	 \__, |_|   \__,_|\__, |
//	 |___/            |___/ 

int main() {

	int fnc;
	printf("Enter function [1-9]\n> ");
	scanf("%d", &fnc);

	double a;
	double b;
	double res;
	const double pi = 3.14159;

	switch(fnc) {
		case 1:
			printf("Enter radius of a circle:\n> ");
			scanf("%lf", &a);
			b = a * a;
			res = b * pi;
			printf("The area of a circle is: %lf\n", res);
			break;
		case 2:
			printf("Enter side a:\n> ");
			scanf("%lf", &a);
			printf("Enter side b:\n> ");
			scanf("%lf", &b);
			res = a * b;
			printf("\nThe area of the rectangle is: %lf\n", res);
			break;
		case 3:
			printf("Enter side: \n> ");
			scanf("%lf", &a);
			res = a * a;
			printf("\nThe area of the square is: %lf\n", res);
			break;
		case 4:
			printf("Enter base: \n> ");
			scanf("%lf", &a);
			printf("Enter height: \n> ");
			scanf("%lf", &b);
			res = a * b * 1 / 2;
			printf("\nThe area of the triangle is: %lf\n", res);
			break;
		case 5:
			printf("Enter base: \n> ");
			scanf("%lf", &a);
			printf("Enter height: \n> ");
			scanf("%lf", &b);
			res = a * b;
			printf("\nThe area of the parallelogram is: %lf\n", res);
			break;
		default:
			printf("Invalid output\n");
	}

	return 0;
}

