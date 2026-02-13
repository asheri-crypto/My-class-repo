#include<stdio.h>

int main () {

float c;
float f;

printf("Enter temperature in celcius\n");
scanf("%f",&c);


f = (c* 9/5.0)+32 ;


printf("Your temperature in fahrenheit is\n");
printf("%f",&f);


return 0;
}
