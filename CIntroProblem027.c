#include <stdio.h>
#include <string.h>

int countWays(int amount, int denominations[]) {
    amount /= 50000;

    int table[amount + 1];
    memset(table, 0, sizeof(table));

    table[0] = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = denominations[i]; j <= amount; j++) {
            table[j] += table[j - denominations[i]];
        }
    }

    return table[amount];
}

int main() {
    int denominations[] = {10, 4, 2, 1};

    int withdrawalAmount;
    scanf("%d", &withdrawalAmount);

    if (withdrawalAmount % 50000 != 0 || withdrawalAmount > 500000) {
        printf("0\n");
    } else {
        printf("%d\n", countWays(withdrawalAmount, denominations));
    }

    return 0;
}