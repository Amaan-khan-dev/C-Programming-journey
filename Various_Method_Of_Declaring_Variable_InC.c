#include <stdio.h>

int main() {

    // In this C file, I am learning various methods of declaring variables

    // 1) Basic Declaration Without Initialization
    int a1;
    float b1;
    char c1;

    // 2) Declaration with Initialization (in one line)
    int a2 = 10;
    float b2 = 12.5;
    char c2 = 'A';

    printf("a2 = %d\n", a2);
    printf("b2 = %.2f\n", b2);
    printf("c2 = %c\n", c2);

    // 3) Multiple Declaration (Same Data Type)
    int x1 = 1, y1 = 2, z1 = 3;
    printf("x1 = %d, y1 = %d, z1 = %d\n", x1, y1, z1);

    // 4) Single Variable Initialization
    int num = 10;
    printf("num = %d\n", num);

    // 5) Multiple Declaration (Partial Initialization)
    int num1 = 0, num2 = 0, num3 = 20; // Fixed: initialized all
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);

    // 6) Assigning Values After Declaration
    int a3, b3, c3;
    a3 = 1;
    b3 = 2;
    c3 = 3;
    printf("a3 = %d, b3 = %d, c3 = %d\n", a3, b3, c3);

    // 7) Using One Variable to Initialize Another
    int num4 = 30;
    int num5 = num4;
    printf("num4 = %d, num5 = %d\n", num4, num5);

    // 8) Post-increment Example
    int x = 100, y, z;
    y = x++;
    z = y++;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
