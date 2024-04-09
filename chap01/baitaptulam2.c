#include "stdio.h"

int wage_main(){
//   int main(){
        int age;
        float wage;
        printf("Enter the wage amount of the person");
        scanf("%f", &wage);
        printf("Enter the age of the person");
        scanf("%d", &age);
    printf("The wage amount is: %.2f\n", wage);
    printf(" The age is: %d", age);
        return 0;

}