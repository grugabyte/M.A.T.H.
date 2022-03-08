#include <stdio.h>
#include <ctype.h>

int main() {

	char res;

	printf("Written by Grug \nDid you enjoy? [y/n] ");
	scanf("%c", &res);

	res = toupper (res);

	if(res == 'Y') {
		printf("Thank you");
	}
	else if(res == 'N') {
		printf("Oof");
	}
	else {
		printf("invalid");
	}

	return 0;
}

