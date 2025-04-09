#include <stdio.h>

// Dynamic programming example 2: Tabulation
// First solve the subproblems iteratively with the same calculation, then concatenate their solutions

int fib(int n) {
    int f[n+1]; // Create a table that goes to n+1
    f[0] = 0; // Set the first value to 0 and second value to 1
    f[1] = 1;
    for (int i = 2; i <= n; i++) { // Starting with 2 (third spot in the table), write the value of the previous 2 spots added together in that spot, until we reach the target value
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main() {
    printf("Fibonacci of 10: %d\n", fib(10));
    return 0;
}

