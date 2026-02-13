#include<stdio.h>
int main()
{
    int a, b;  // You can declare both in one line (optional)

    printf("Enter a and b values: \n");
    scanf("%d %d", &a, &b);  // Space between %d %d is better

    printf("\nYou entered the following numbers before swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping using arithmetic (perfectly correct!)
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
