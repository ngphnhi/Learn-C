#include "stdio.h"
#define PI 3.14159265359

int area_main(){
//int main() {
    float radius, area, circumference;
    printf("Enter radius of the circle");
    scanf("%f", &radius);

    area= PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle is: %.2f\n", area);
    printf("Circumference of the circle is: %.2f\n", circumference);

    return 0;
}
