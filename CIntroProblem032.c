#include <stdio.h>

void egyptianFractions(int n, int d) {
    if (d == 0 || n == 0) {
        return;
    }
    if (d % n == 0) {
        printf("1/%d", d / n);
        return;
    }
    if (n % d == 0 || n > d) {
        printf("-1");
    }
    int x = d / n + 1;
    printf("1/%d ", x);
    egyptianFractions(n * x - d, d * x);
}

int main() {
    int numerator, denominator;
    scanf("%d / %d", &numerator, &denominator);

    egyptianFractions(numerator, denominator);

    return 0;
}