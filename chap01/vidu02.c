#include "stdio.h"

int chap1vidu2_main(){
//int main(){
    double toan, van, anh;
    printf("Enter the first number:");
    scanf("%lf", &toan);
    printf("Enter the second number:");
    scanf("%lf", &van);
    printf("Enter the third number:");
    scanf("%lf", &anh);
    double total = (toan + van)*2 +anh;
    printf(" Total is: %.2lf\n", total);
    if(total>=40)
    {
        printf("do cap 3");
    }
    else{
        printf("truot");
    }
    return 0;

}