#include <stdio.h>

int main() {
    double price;
    double opening_price = -1, closing_price = -1, highest_price = -1, lowest_price = 1e10;

    while (1) {
        scanf("%lf", &price);
        if (price == -1) {
            break;
        }

        if (opening_price == -1) {
            opening_price = price;
        }

        closing_price = price;

        if (price > highest_price) {
            highest_price = price;
        }

        if (price < lowest_price) {
            lowest_price = price;
        }
    }

    if (opening_price == -1) {
        printf("-1 -1 -1 -1");
    } else {
        printf("%.2lf %.2lf %.2lf %.2lf\n", opening_price, closing_price, highest_price, lowest_price);
    }
    return 0;
}
