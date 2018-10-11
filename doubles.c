#include <stdio.h>

int main () {


char choice;
double c;
double f;

printf("Would you like to enter fahrenheit(f) or celcius(c)? ");

scanf("%c", &choice);

if (choice == 'f') {

printf("Enter a temperature in degress fahrenheit: ");

scanf("%lf", &f);

printf("%.1lf degrees fahrenheit is the same as %.1lf degrees celsius", f, (5*(f-32))/9);

}

if (choice == 'c') {

printf("Enter a temperature in degress celsius: ");

scanf("%lf", &c);

printf("%.1lf degrees celsius is the same as %.1lf degrees fahrenheit", c, (((c*9)/5)+32));

}

return 0;

}

