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

    // Sorting logic
    int smallest, middle, largest;

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;

        if (num2 <= num3) {
            middle = num2;
            largest = num3;
        } else {
            middle = num3;
            largest = num2;
        }

    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;

        if (num1 <= num3) {
            middle = num1;
            largest = num3;
        } else {
            middle = num3;
            largest = num1;
        }

    } else {
        smallest = num3;

        if (num1 <= num2) {
            middle = num1;
            largest = num2;
        } else {
            middle = num2;
            largest = num1;
        }
    }

    printf("Numbers in ascending order: %d, %d, %d\n", smallest, middle, largest);

    return 0;
}

