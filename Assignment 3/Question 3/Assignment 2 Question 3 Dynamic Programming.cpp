#include <stdio.h>

// Avoids redundant calculations of recursion by storing results in a table
// Much more efficient for larger 'n' and 'k' values than recursion

int binomialCoeff(int n, int k) {
    int dp[n+1][k+1]; //2D array to store the values of C(i,j)

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (i < k ? i : k); j++) {
            if (j == 0 || j == i) { // For each 'i', if 'j' equals 0 or 'i', we set the array at that spot to 1. This triggers the base case to concatenate all stored results
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j]; // If it doesn't trigger the base case solution, we solve for that specific interval the same way we did for the recursive solution
            }
        }
    }
    return dp[n][k];
}

int main() {
    int n = 5, k = 2;
    printf("Binomial Coefficient C(%d, %d) = %d\n", n, k, binomialCoeff(n, k));
    return 0;
}
