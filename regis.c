#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

double input;
int alt;
int f;
int r;
int r2;
int r3;
int r4;
int r5;
int r6;
int r7;
int r8;
int r9;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;
int hundreds = 0;
int twenties = 0;
int tens = 0;
int fives = 0;
int ones = 0;




printf("Please enter an amount of money: ");
scanf("%lf", &input);

input = input * 100;

alt = round(input);

/*if (alt <= 100 || alt >= 25) {}*/

r4 = alt % 10000;

hundreds = alt / 10000;

printf("\n%d hundred(s)", hundreds);

twenties = r4 / 2000;

printf("\n%d twenties(s)", twenties);

r5 = r4 % 2000;

tens = r5 / 1000;

printf("\n%d ten(s)", tens);

r6 = r5 % 1000;

fives = r6 / 500;

printf("\n%d five(s)", fives);

r7 = r6 % 500;

ones = r7 / 100;

r8 = r7 % 100;

printf("\n%d one(s)", ones);

r9 = r8 % 25;

quarters = r8 / 25;

printf("\n%d quarter(s)", quarters);

dimes = r9 / 10;

printf("\n%d dime(s)", dimes);

r2 = r9 % 10;

nickels = r2 / 5;

printf("\n%d nickels(s)", nickels);

r3 = r2 % 5;

pennies = r3 / 1;

printf("\n%d penny(s)", pennies);



}
