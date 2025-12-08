//write a program to find 
//Given 2 numbers ‘a’ and ‘b’ ,
//find ‘a’ raised to the power ‘b’.
#include <stdio.h>
int main() {

    int a,b;
    printf("Enter a base number: ");
    scanf("%d",&a);
    printf("Enter a power number: ");
    scanf("%d",&b);

    int power = 1;
    for(int i=1; i<=b; i++) {
        power = power * a;
  }
    printf("%d raised to the power %d is = %d\n",a,b,power);
    return 0;
}