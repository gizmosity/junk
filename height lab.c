#include <stdio.h>

int main () {
	
	// ==, !=, >, >=, <, <=
	// &&, ||, !
	// coded by KALEO TANASALE no stealerino pls

	char g; 
	int f;
	int i;


	printf("Enter your sex (m/f): ");
	scanf("%c", &g);

	printf("Enter your height\nfeet: ");
	scanf("%d", &f);
	printf("inches: ");
	scanf("%d", &i);


	if (g == 'm') {

		if (f == 5 && i == 9) {printf("Your height is just about average for a male.");}
		
		if (f >= 5 && i > 9 || (i == 0 && f > 5)) {printf("Your height is above average for a male");}
		
		if (f <= 5 && i < 9 || (f <= 4 && i <= 11)) {printf("Your height is below average for a male");}

	}

	else if (g == 'f') {

		if (f == 5 && i == 4) {printf("Your height is just about average for a female.");}
		
		if (f >= 5 && i > 4 || (i == 0 && f > 5)) {printf("Your height is above average for a female");}

		if (f <= 5 && i < 4 || (f <= 4 && i <= 11)) {printf("Your height is below average for a female");}
	}

	return 0;
	
	
}