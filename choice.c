#include <stdio.h>
#include <ctype.h>

// Function to check Prime Number
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to check Perfect Number
int isPerfect(int n) {
    if (n <= 1) return 0;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

// Helper function to calculate integer power
int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) res *= base;
    return res;
}

// Function to check Armstrong Number
int isArmstrong(int n) {
    if (n < 0) return 0;
    int original = n, temp = n, digits = 0, sum = 0;
    
    // Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // Calculate sum of digits raised to the power of digits
    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }
    return sum == original;
}

// Helper function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

// Function to check Strong Number
int isStrong(int n) {
    if (n <= 0) return 0;
    int original = n, temp = n, sum = 0;
    
    while (temp > 0) {
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    return sum == original;
}

int main() {
    int choice, num;

    // Do-while loop to keep the menu running until the user chooses to exit
    do {
        printf("1. Check Prime Number\n");
        printf("2. Check Perfect Number\n");
        printf("3. Check Armstrong Number\n");
        printf("4. Check Strong Number\n");
        printf("5. Check All Properties\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

	

        if (choice >= 1 && choice <= 5) {
            printf("Enter an integer: ");
            scanf("%d", &num);
        }
        // Switch-case statement to handle user choices
        switch (choice) {
            case 1:
                if (isPrime(num))
                    printf("Result: %d is a Prime number.\n", num);
                else
                    printf("Result: %d is NOT a Prime number.\n", num);
                break;

            case 2:
                if (isPerfect(num))
                    printf("Result: %d is a Perfect number.\n", num);
                else
                    printf("Result: %d is NOT a Perfect number.\n", num);
                break;

            case 3:
                if (isArmstrong(num))
                    printf("Result: %d is an Armstrong number.\n", num);
                else
                    printf("Result: %d is NOT an Armstrong number.\n", num);
                break;

            case 4:
                if (isStrong(num))
                    printf("Result: %d is a Strong number.\n", num);
                else
                    printf("Result: %d is NOT a Strong number.\n", num);
                break;

            case 5:
                printf("\n--- Analysis for %d ---\n", num);
                printf("- Prime Number:    %s\n", isPrime(num) ? "Yes" : "No");
                printf("- Perfect Number:  %s\n", isPerfect(num) ? "Yes" : "No");
                printf("- Armstrong Number:%s\n", isArmstrong(num) ? "Yes" : "No");
                printf("- Strong Number:   %s\n", isStrong(num) ? "Yes" : "No");
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option between 1 and 6.\n");
        }
    } while (choice != 6 && isdigit(choice));

    return 0;
}
