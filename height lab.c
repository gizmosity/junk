#include <stdio.h>

int main () {
	
	// ==, !=, >, >=, <, <=
	// &&, ||, !
	// coded by KALEO TANASALE no stealerino pls

	char g; 
	int f;
	int i;
	int h;

	printf("Enter your sex (m/f): ");
	scanf("%c", &g);

	printf("Enter your height\nfeet: ");
	scanf("%d", &f);
	printf("inches: ");
	scanf("%d", &i);


	h = f * 12 + i;
	
	if (g == 'm') {

		if (h == 69) {printf("Your height is just about average for a male.");}
		
		if (h > 69) {printf("Your height is above average for a male");}
		
		if (h < 69) {printf("Your height is below average for a male");}

	}

	else if (g == 'f') {

		if (h == 64) {printf("Your height is just about average for a female.");}
		
		if (h > 64) {printf("Your height is above average for a female");}

		if (h < 64) {printf("Your height is below average for a female");}
	}

	return 0;
	
	
}
