#include <stdio.h>

// made by kaleo

int main () {

int row1;
int col1;

	printf("NOTE: TO PRODUCE THE FULL EFFECT, INPUT 29 FOR THE COLUMN VALUE!\n");

	printf("Enter in the desired amount of rows: ");
	scanf("%d",&row1);

	printf("Enter in the desired amount of columns: ");
	scanf("%d",&col1);


	for (int row = 0; row < row1; row++) {

		for (int col = 0; col < col1; col++) {
			if (col < 7) {
				printf("1");
			}
			if (col >= 7 && col <= 21) {
				printf("0");
			}

			if (col > 21) {
				printf("1");
			}
		}
		printf("\n");
	}

	return 0;
}
