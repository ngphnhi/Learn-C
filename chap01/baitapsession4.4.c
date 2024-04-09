#include "stdio.h"
#define PI  3.14

int baitap44_main(){
//int main(){
    float r, h, V;
    printf("Enter the radius of the cylindrical:");
    scanf("%f", &r);
    printf("Enter the height of the cylindrical:");
    scanf("%f", &h);
    V = PI * r * r * h;
    printf("Volume of the cylindrical is: %.2f", V);
    return 0;
}