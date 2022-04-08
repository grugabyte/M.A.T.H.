#include <stdio.h>

//WARNING THIS IS A TEST. ORIGINALLY WRITTEN IN JAVA.
//THE OBJECTIVE OF THIS IS TO REWRITE MY ORIGINAL PROGRAM
//IN A FUNCTIONAL MANNER, NOT OBJECT ORIENTED. MY PREVIOUS
//PROGRAM FEATURED BUGS.
//
//	  __ _ _ __ _   _  __ _ 
//	 / _` | '__| | | |/ _` |
//	| (_| | |  | |_| | (_| |
//	 \__, |_|   \__,_|\__, |
//	 |___/            |___/ 
//
//


int main() 
{
	int sub;

	printf("Homework manager: ");
	printf("\nHow many subjects do you have?\n>  ");
	scanf("%d", &sub);

	int i = 0;
	char list[sub][25];
	int lista[sub];

	while(i < sub) {
		printf("Enter subject\n>  ");
		scanf("%s", &list[i]);
		printf("Enter duration:\n> ");
		scanf("%d", &lista[i]);
		i++;	
	}

	//school ending time
	printf("Please enter the time school ends: \nHours:\n> ");
	int hr1;
	scanf("%d", &hr1);
	printf("Minutes:\n> ");
	int min1;
	scanf("%d", &min1);

	//home arrival time
	printf("Please enter the time you arrive home: \nHours: \n> ");
	int hr2;
	scanf("%d", &hr2);
	printf("Minutes:\n> ");
	int min2;
	scanf("%d", &min2);

	//dinner time is coming soon
	
	printf("Proceeding...\nSchedule:\n");

	//prints subjects and times
	printf("%d:%d\tSchool ends\n", hr1, min1);
	printf("%d:%d\tArrive home\n", hr2, min2);
	
	//printf("%s\n", list[0]);

	int j = 0;
	int k = sub;

	//time
	int newth = hr2;
	int newtm = min2 + 10;
	int v;

	while(j < k) {


		if(lista[j] < 30) {
			printf("%d:%d\t%s\n", newth, newtm, list[j]);
			v = newtm + lista[j];
			newtm = v;
		}
		else {
			printf("%d:%d\t%s\n", newth, newtm, list[j]);
			v = 60 - lista[j];
			newth++;
			newtm = v;

		}
		j++;
	}

	printf("End\n");


	return 0;
}

