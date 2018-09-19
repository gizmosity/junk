#include <stdio.h>

int main(){
	int h;
	char i;
	
	printf("Enter in a number: ");
	scanf("%d", &h);
	scanf("%c", &i);

	printf("Enter in a character: ");
	scanf("%c", &i);

	printf("You entered in a %d\nYou entered in a %c", h, i);


	return 0; 
}

