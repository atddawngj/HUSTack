#include <stdio.h>

int main() {
    double height;
    int totalPrice = 0;

    while (1) {
        scanf("%lf", &height);
        if (height == 0) {
            break;
        }

        if (height > 1.3) {
            totalPrice += 30000; 
        } else {
            totalPrice += 20000;
        }
    }

    printf("%d\n", totalPrice);

    return 0;
}
