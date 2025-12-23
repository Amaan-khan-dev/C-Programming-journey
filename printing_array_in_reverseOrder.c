#include <stdio.h>

int main() {
    int arr[3];

    // Input
    for(int i = 0; i < 3; i++) {
        printf("Enter %d number: ", i);
        scanf("%d", &arr[i]);
    }

    // Output in reverse
    printf("\nArray in reverse order:\n");
    for(int i = 2; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}