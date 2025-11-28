//  Consider a bank that offers fixed deposit
// accounts with cumulative (annually) interest on the balance available in the
// account. Write a C program that reads the amount initially invested (called
// Principal amount) in an account and interest rate. The program generates the balance
// available in the account at the end of each year for first five years.

#include<stdio.h>
int main() {
    double principalAmount, interestRate, balance;

    // Input the principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principalAmount);

    // Input the interest rate
    printf("Enter the interest rate (in percentage): ");
    scanf("%lf", &interestRate);

    // Convert interest rate to decimal
    interestRate /= 100;

    // Display the header
    printf("\nYear\tBalance\n");

    // Calculate and display the balance for the first five years
    for (int year = 1; year <= 5; year++) {
        // Calculate the balance at the end of the year
        balance = principalAmount * (1 + interestRate);

        // Display the year and balance
        printf("%d\t%.2f\n", year, balance);

        // Update principal amount for the next year
        principalAmount = balance;
    }

    return 0;
}
