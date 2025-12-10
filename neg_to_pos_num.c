#include <stdio.h>

int main() {
    int num;

    printf("Enter a negative number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
        printf("Positive number is: %d", num);
    }
    else {
        printf("You entered a positive number. Please enter a negative number.");
    }

    return 0;
}