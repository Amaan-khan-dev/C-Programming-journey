#include <stdio.h>

int main()
{
    int number;
    int count = 0;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count = count + 1;
        }
    }

    if (count == 2)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}