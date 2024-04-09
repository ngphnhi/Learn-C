#include "stdio.h"

int baitap43_main(){
//int main(){
    float a, b, C, S;
    printf("Enter the length of rectangle:");
    scanf("%f", &a);
    printf("Enter the width of rectangle:");
    scanf("%f", &b);
    C = 2 * (a + b);
    S = a * b;
    printf("Area of the rectangle is: %.2f\n",S);
    printf("Perimeter of the rectangle is: %.2f ",C);
    return 0;
}
