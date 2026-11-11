#include <stdio.h>
 int calculateSum(int a, int b);
 int calculateSum(int a, int b) {
    return a+b;
 }
 int main (){
    int result = calculateSum(80,67);
    printf("The sum is %d", result);
    scanf("%d", &result);

    return 0;
 }