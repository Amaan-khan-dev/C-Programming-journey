#include <stdio.h>

int main() {
    int i = 0;

    // Demonstration of switch fall-through with a loop
    switch (i) {
        case 0:
            while (i < 3) {
                printf("%d", i);

                // No break here, execution falls through to case 1
        case 1:
                i++;
            }
    }

    return 0;
}