#include <stdio.h>

void printArray(int arr[], int size);
int findMin(int arr[], int size, int j);

int main () {

int size;
		
	printf("How many numbers will you enter?\n");
	scanf("%d", &size);

int unsortedArray[size];
int sortedArray[size];

	for (int i = 0; i < size; i++) {

		printf("num %d = ", i + 1);
		scanf("%d", &unsortedArray[i]);
	
		while (unsortedArray[i] < 0) {

			printf("num %d = ", i + 1);
			scanf("%d", &unsortedArray[i]);

		}
	}

printArray(unsortedArray, size);

int minIndex;
int x;

	for(int i = 0; i < size - 1; i++) {

		for(int j = i; j < size; j++) {

		minIndex = findMin(unsortedArray, size, j);


		}

	

	}

		

		printf("index of min value = %d", minIndex);
	
	

	

	
}


void printArray(int arr[], int size) {

for (int i = 0; i < size; i++) {

	printf("[%d]", arr[i]);

	}

	printf("\n");

}

int findMin(int arr[], int size, int j) {
	int min;
	int counter;
	int minIndex;

	for (int i = j; i < size; i++) {
		counter = 0;

		for (int h = j; h < size; h++) {
			if (arr[i] <= arr[h]) {
				counter++;
			}
		}

		if (counter == size) {
			min = arr[i];
			minIndex = i;
		}


	}
	
	return minIndex;
}
