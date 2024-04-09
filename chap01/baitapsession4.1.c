#include "stdio.h"

int sum_main(){
//int main(){
    int a, b, c, sum;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    sum = a + b + c;
    printf("The sum is: %d",sum);
    return 0;

}


