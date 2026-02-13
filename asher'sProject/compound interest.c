#include<stdio.h>
#include<math.h>

int main(){

int principal;
float rate;
float time;
float amount;
float interest;

printf("Enter the value of the principal : \n");
scanf("%d",&principal);

printf("Enter the time for the keeping :\n");
scanf("%f",&time);

printf("Enter the rate of the keeping :\n");
scanf("%f",&rate);

amount = principal * pow( (1 + rate / 100),time );

interest = amount - principal;

printf("The amount of the money after the interest is :\n");
printf("%f",amount);

printf("The total compound interest after the deposit is :\n");
printf("%f",interest);

return 0;
}
