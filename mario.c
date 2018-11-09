#include <stdio.h>

// made by kaleo
// 2n + 2

int main () {

int row1;
int col1;

	printf("height: ");
	scanf("%d",&row1);

	while (row1 <= 0 || row1 > 24) {

	printf("Error: Please enter a positive integer that is less than 25: ");
	scanf("%d",&row1);

	}

	for (int row = 0; row < row1; row++) {

		for (int col = 0; col < row1*2 + 2; col++) {

		
			
		if (col > row1 - 2 - row && col < ((row1*2 + 2) / 2) - 1 || col < row1 + 3 + row && col > (row1*2 + 2) / 2) {

		printf("#");
		

		}

		else {

		printf(" ");

		} 

		}
		printf("\n");
	}

	return 0;
}
