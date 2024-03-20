#include <stdio.h>

int daysInMonth(int month) {
    if (month == 2) {
        return 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; 
    } else {
        return 31;
    }
}

int main() {
    int date, month;
    scanf("%d %d", &date, &month);

    int remainingDates = 0;
    
    for (int i = date + 7; i <= daysInMonth(month); i += 7) {
        remainingDates++;
        printf("%d ", i);
    }

    if (remainingDates == 0) {
        printf("0\n");
    }

    return 0;
}
