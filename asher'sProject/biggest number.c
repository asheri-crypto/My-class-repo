#include <stdio.h>
#include<conio.h>

int main(){

int a;
int b;
int c;
int biggest;

printf("Enter 3 numbers\n");
scanf("%d %d %d",&a,&b,&c);

//HERE we will use a ternary operator this is as an if statement for 3 statements
//I ts format is (Condition)?(If true):(If false)

biggest = (a>b && a>c) ? (a) : ( (b>c) ? (b) : (c) );

printf("The biggest number among all the 3 you entered is :\n");
printf("%d",biggest);


return 0;
}
