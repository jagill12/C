#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to count the number of ways to make change for a given amount
int WaysToMakeChange(float coins[], int numCoins, int amount) {
    int dp[amount + 1]; // dp stands for dynamic programming
    
    // Set all values in the dp array to 0
    for (int i = 0; i <= amount; i++) {
        dp[i] = 0;
    }
    
    // There is one way to make change for amount 0: use no coins
    dp[0] = 1;

    // Iterate over each coin
    for (int i = 0; i < numCoins; i++) {
        for (int j = (int)(coins[i] * 100); j <= amount; j++) { // Outer 'i' loop iterates over each coin denomination; inner 'j' loop iterates over each coin value up to the given amount
            dp[j] += dp[j - (int)(coins[i] * 100)]; // Dynamic programming portion. For each amount 'j', update 'dp[j]' by adding number of ways to make change by 'j - (int)(coins[i] * 100)
        } // Essentially, it determines how many ways there are to make change for the target value for each coin, then adds them all together. 
    }
    
    return dp[amount];
}

// Function to check if the input is a valid float
int isValidFloat(char* str) {
    char* endptr;
    float value = strtof(str, &endptr);
    
    if (*endptr != '\0' || endptr == str) {
        return 0; // Not a valid float
    }
    
    return 1; // Valid float
}

int main() {
    // Define the available coin denominations in dollars
    float coins[] = {0.01, 0.05, 0.10, 0.25, 0.50, 1.00};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    
    char input[100];
    float amount;
    
    // Prompt the user for the amount
    printf("Enter the amount in dollars: ");
    while (1) {
        fgets(input, sizeof(input), stdin);
        
        input[strcspn(input, "\n")] = 0;
        
        if (isValidFloat(input)) {
            amount = strtof(input, NULL);
            break;
        } else {
            printf("Invalid input. Please enter a valid float value: ");
        }
    }
    
    // Convert dollars to cents
    int amountInCents = (int)(amount * 100);
    
    // Calculate the number of ways to make change
    int ways = WaysToMakeChange(coins, numCoins, amountInCents);
    
    // Print the result
    printf("Number of ways to make change for %.2f: %d\n", amount, ways);
    return 0;
}

