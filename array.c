#include<stdio.h>

int main() {
    int num[5] = {10, 20, 30, 40, 50};

    printf("Array First Element: %d\n", num[0]);
	int i;
    for(i = 0; i < 5; i++) {
        printf("Array element %d = %d\n", i, num[i]);
    }

    return 0;
}

