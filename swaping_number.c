#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    //int t = a;
    printf("before a =%d\n",a);
    printf("before b =%d\n",b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swaping a =%d\n",a);
    printf("after swaping b =%d",b);

    return 0;
}