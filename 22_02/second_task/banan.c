#include <stdio.h>

int main () {
    int count_kilo;
    double price_kilo = 5;
    int discount = 20;

    printf("Введите кол-во килограмм бананов: ");
    scanf("%d", &count_kilo);
    
    // count all_sum of bananas
    int all_sum = count_kilo * price_kilo;

    // example: all_sum * 0.20%
    printf("%f\n", all_sum * (double) discount / 100);
    return 0;
}
