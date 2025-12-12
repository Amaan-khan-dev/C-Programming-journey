// Program: Right Angle Triangle Star Pattern
// Description: Takes number of rows from the user and prints an increasing star pattern.
// Author: Amaan Khan
// Date: 12-12-2025
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}