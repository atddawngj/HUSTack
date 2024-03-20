#include <stdio.h>

int main() {
    double loanAmount, interestRate, duration;

    scanf("%lf %lf %lf", &loanAmount, &interestRate, &duration);

    double monthlyInterestRate = interestRate / 12,
           monthlyPrincipalPayment = loanAmount / (duration * 12),
           totalPayment = 0,
           remainingPrincipal = loanAmount;

    for (int i = 0; i < duration * 12; i++) {
        double monthlyInterestPayment = remainingPrincipal * monthlyInterestRate,
               monthlyPayment = monthlyPrincipalPayment + monthlyInterestPayment;
        
        totalPayment += monthlyPayment;

        remainingPrincipal -= monthlyPrincipalPayment;
    }

    printf("%.2lf %.2lf\n", totalPayment, totalPayment - loanAmount);

    return 0;
}