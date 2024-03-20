#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", isPalindrome(num));

    return 0;    
}