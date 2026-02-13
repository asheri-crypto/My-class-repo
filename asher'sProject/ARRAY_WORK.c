#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int myArray[5];

    // Input values
    for (int i = 0; i < 5; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &myArray[i]);
    }

    int sum   = 0;
    int big   = myArray[0];
    int small = myArray[0];

    // Compute sum, smallest, and biggest
    for (int i = 0; i < 5; i++) {
        sum += myArray[i];

        if (myArray[i] >= big) {
            big = myArray[i];
        }

        if (myArray[i] <= small) {
            small = myArray[i];
        }
    }

    printf("\nThe sum is          %d\n", sum);
    printf("The smallest value is %d\n", small);
    printf("The biggest value is  %d\n", big);

    return 0;
}

