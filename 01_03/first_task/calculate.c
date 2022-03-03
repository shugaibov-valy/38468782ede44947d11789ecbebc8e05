#include <stdio.h>

int main () {
    int count_power;
    int hours;
    int price;

    printf("Enter used power: ");
    scanf("%d", &count_power);
    
    printf("Enter finished time (hours): ");
    scanf("%d", &hours);

    printf("----\n");
    
    if (hours > 0 && hours <= 8) {
        price = 1;
    }
    else if (hours > 8 && hours <= 16) {
        price = 2;
    } 
    else if (hours > 16 && hours <= 24) {
        price = 3;
    }
    printf("Total price: %d\n", count_power * price);
    return 0;
}
