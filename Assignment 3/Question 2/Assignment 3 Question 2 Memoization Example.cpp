#include <stdio.h>

#define MAX 1000
int memo[MAX]; // Top-Down approach to Fibonacci sequence in Dynamic Programming (memoization)
// Memo stands for "memoization"

int fib(int n) {
    if (memo[n] != -1) {
        return memo[n]; 
    }
    if (n <= 1) {
        return n; // Prevents from subtraction in case we're starting at the beginning, because that could mistakenly could return -1
    }
    memo[n] = fib(n-1) + fib(n-2); // While iterating through, the current number is determined by the last number added onto the number before it
    return memo[n];
}

int main() {
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }
    printf("Fibonacci of 10: %d\n", fib(10));
    return 0;
}

