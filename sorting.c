// Display three input numbers in sorted (non-decreasing) order
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Welcome to the ascending order program\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Check smallest number
    if (num1 <= num2 && num1 <= num3) {
        // num1 is smallest
        if (num2 <= num3)
            printf("%d, %d, %d", num1, num2, num3);
        else
            printf("%d, %d, %d", num1, num3, num2);
    }
    else if (num2 <= num1 && num2 <= num3) {
        // num2 is smallest
        if (num1 <= num3)
            printf("%d, %d, %d", num2, num1, num3);
        else
            printf("%d, %d, %d", num2, num3, num1);
    }
    else {
        // num3 is smallest
        if (num1 <= num2)
            printf("%d, %d, %d", num3, num1, num2);
        else
            printf("%d, %d, %d", num3, num2, num1);
    }

    return 0;
}

