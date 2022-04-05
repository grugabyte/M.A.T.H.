#include <stdio.h>
#include <ctype.h>

int main() {

	char res;

	printf("Written by Grug \nDid you enjoy? [y/n] ");
	scanf("%c", &res);

	res = toupper (res);

	if(res == 'Y') {
		printf("Thank you\n");
	}
	else if(res == 'N') {
		printf("Ok\n");
	}
	else {
		printf("invalid\n");
	}

	return 0;
}

