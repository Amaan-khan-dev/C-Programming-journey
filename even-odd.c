#include <stdio.h>

int main() {
    // Even or Odd number checker

    int num;

    printf("Enter a number to check Even or Odd: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Number is Even");
    } else {
        printf("Number is Odd");
    }

    return 0;
}
