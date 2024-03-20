#include <stdio.h>
#include <string.h>

int isValidBarcode(char *barcode) {
    int sum = 0;

    for (int i = 0; i < 12; i++) {
        int digit = barcode[i] - '0';

        if (i % 2 == 1) {
            sum += digit * 3;
        } else {
            sum += digit;
        }
    }

    int checkDigit = (10 - (sum % 10)) % 10;

    return (checkDigit == (barcode[12] - '0'));
}

int main() {
    char barcode[14];
    scanf("%s", &barcode);

    if (strncmp(barcode, "893", 3) == 0) {
        printf("%d\n", isValidBarcode(barcode));
    } else {
        printf("0\n");
    }
}