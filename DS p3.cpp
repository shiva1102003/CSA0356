#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num == 0 || num == 1) {
        printf("Factorial of %d is 1\n", num);
    } else {
        for (int i = 2; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
} 

// Test Cases
// Test Case 1
// Input: 5
// Expected Output: Factorial of 5 is 120

// Test Case 2
// Input: 0
// Expected Output: Factorial of 0 is 1

// Test Case 3
// Input: 1
// Expected Output: Factorial of 1 is 1

// Test Case 4
// Input: -3
// Expected Output: Factorial is not defined for negative numbers.

// Test Case 5
// Input: 10
// Expected Output: Factorial of 10 is 3628800

// Test Case 6
// Input: 'A'
// Expected Output: Factorial of 65 is <factorial value>  // ASCII value of 'A' is 65