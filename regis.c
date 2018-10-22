#include <stdio.h>
#include <math.h>

int main () {

double input;
int alt;
int f;
int r; 


printf("Please enter an amount of money: ");
scanf("%lf", &input);

input = input * 100;

alt = round(input);

if (alt <= 5) {

printf("%.2lf can be expressed as %d pennies", input/100, alt);

}

if (alt <= 100) {

for (alt = f; alt > 10; r = alt % 5, alt = alt / 10) {

alt = alt / 10;

}

printf("%d", alt);

}
