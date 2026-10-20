#include <stdio.h>
int main() {
    float balance, amount;
    int choice;

    // Read the current account balance
    printf("Enter current account balance: ");
    scanf("%f", &balance);

    // Read the customer's choice
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance inquiry\n");
    printf("2. Cash withdrawal\n");
    printf("3. Cash deposit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Balance inquiry
            printf("Current Balance: %.2f\n", balance);
            break;

        case 2:
            // Cash withdrawal
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("Transaction successful\n");
                printf("Remaining Balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            // Cash deposit
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit successful\n");
            printf("Updated Balance: %.2f\n", balance);
            break;

        default:
            // Any other choice
            printf("Invalid option\n");
            break;
    }

    return 0;
}
