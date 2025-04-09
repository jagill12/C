#include <stdio.h>

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) { // If k equals 0 or n, the function returns '1' since there is only one way to choose '0' or 'n' elements from 'n' elements
        return 1;
    }
    return binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k); // The first half of this equation reduces k by 1 when it's recalled until it reaches the base case. Then it propagates back up through the recursive calls.
}

int main() {
    int n = 5, k = 2;
    printf("Binomial Coefficient C(%d, %d) = %d\n", n, k, binomialCoeff(n, k));
    return 0;
}
