#include<stdio.h>
int main(){

// the programme is related that if one(float) number is give
//for example here 5.2
//we want only it's fractional/point value
//5.2 - 5 = 0.2 this is answer

    float num;
    printf("Give a float Number: ");
    scanf("%f", &num);

    int integer_number = num;   // automatic conversion

    float result = num - integer_number;
    printf("Fractional part = %f", result);

    return 0;
}

