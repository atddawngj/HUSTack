#include <stdio.h>

int main() {
    int n, overweightCount = 0;
    double weight;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &weight);
        if (weight > 7) {
            overweightCount++;
        }
    }

    printf("%d\n", overweightCount);

    return 0;
}
