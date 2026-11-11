#include <stdio.h>
int main () {
float amount, discount;

if (amount >= 1000) {
discount = amount * 0.05;
amount -= discount;
}
printf("Amount after discount is %.2f rupees", amount);

    return 0;
}

