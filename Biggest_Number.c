#include<stdio.h> 
int main(){

    int num1;
    int num2;
    int num3;

    printf("Give 3 Number and find which Number is biggest::\n");

    printf("Enter a first Number: ");
    scanf("%d", &num1);

    printf("Enter a Secound Number: ");
    scanf("%d", &num2);

    printf("Enter a Third Number: ");
    scanf("%d", &num3);

    printf("1st number = %d 2nd number = %d 3rd number = %d\n", num1, num2, num3);

    if(num1 > num2 && num1 > num3){
        printf("first Number is biggest = %d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("secound Number is biggest = %d", num2);
    }
    else if(num3 > num2 && num3 > num1){
        printf("Third Number is biggest = %d", num3);
    }
    else{
        printf("all number are equal");
    }

    return 0;
}
