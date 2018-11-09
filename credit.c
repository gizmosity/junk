#include <stdio.h>
#include <stdlib.h>


// made by kaleo. u steal u die


int main () {
	char userInput[17];
	int sum = 0;
	int sum2 = 0;
	int size = 0;
	int i = 0;
	int check1;
	int check2;
	int checksum = 0;

	printf("Enter a credit/debit card number: ");
	scanf("%s", userInput);

	for (size = 0; userInput[i] != '\0'; i++) {
		size++;
	}

	if (size % 2 != 0){
		for (int i = 1; userInput[i] != '\0'; i = i + 2) {
			sum = sum + userInput[i] - 48;

			check1 = (userInput[i] - 48)*2;

			if (check1 > 9) { 
				check2 = check1 % 10 + 1;

				checksum = checksum + check2;

			

			}
			else{
				checksum = checksum + check1;

				
			}
		}

		for (int h = 0; h < size; h = h + 2) {
			sum2 = sum2 + userInput[h] - 48;
		}

	}
	else { 
		for (int i = 0; userInput[i] != '\0'; i = i + 2){
			sum = sum + userInput[i] - 48;

			check1 = (userInput[i] - 48)*2;

			if (check1 > 9){ 

				check2 = check1 % 10 + 1;

				checksum = checksum + check2;

			}
			else {
				checksum = checksum + check1;
						
			}			
		}
		
		for (int h = 1; h < size; h = h + 2) {
			sum2 = sum2 + userInput[h] - 48;	
		}

	}	

	printf("\nchecksum = %d\n", checksum + sum2);

	for (i = 0; userInput[i] != '\0'; i++) {
	
	}

	if ((checksum + sum2) % 10 != 0) {
	
	printf("INVALID\n");
	exit(0);

	}

	if ((checksum + sum2) % 10 == 0) {

	printf("VALID\n");

	}

	if (userInput[0] - 48 == 3 && userInput[1] - 48 == 7 || userInput[1] - 48 == 4) {

	printf("Card type: AMEX");

	}
	
	else if (userInput[0] - 48 == 4) {

	printf("Card type: VISA");

	}

	else if (userInput[0] - 48 == 5 && userInput[1] - 48 == 1 || userInput[1] - 48 == 2 || userInput[1] - 48 == 3 || userInput[1] - 48 == 4 || userInput[1] - 48 == 5){

	
	printf("Card type: MASTACARD");
	
	}

	else {

	printf("Card type: ???");

	}	

	return 0;
}
