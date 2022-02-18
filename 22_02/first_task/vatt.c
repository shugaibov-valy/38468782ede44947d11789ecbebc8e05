#include <stdio.h>

int main () {
    int count_vatt;
    double price_vatt = 0.20;

    printf("Введите кол-во киловатт: ");
    scanf("%d", &count_vatt);
    
    printf("%g\n", count_vatt * price_vatt);
    return 0;
}
