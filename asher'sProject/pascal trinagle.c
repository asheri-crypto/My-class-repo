#include <stdio.h>

#define MAX_ROWS 30   // You can increase this (but watch for int overflow)

int main() {
    int n;
    int triangle[MAX_ROWS][MAX_ROWS] = {0};  // Initialize whole array to 0

    printf("Enter number of rows for Pascal's Triangle (1 to %d): ", MAX_ROWS);
    scanf("%d", &n);

    if (n < 1 || n > MAX_ROWS) {
        printf("Please enter a number between 1 and %d.\n", MAX_ROWS);
        return 1;
    }

    // Build the triangle using DP (bottom-up)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // Edge cases: first and last element of each row = 1
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            }
            // Inner elements = sum of two elements from previous row
            else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }

    // Print the triangle with nice spacing
    printf("\nPascal's Triangle (%d rows):\n\n", n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces for centering (optional but looks better)
        for (int space = 0; space < n - i - 1; space++) {
            printf("   ");  // 3 spaces per level
        }

        for (int j = 0; j <= i; j++) {
            printf("%6d", triangle[i][j]);  // right-aligned, width 6
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
