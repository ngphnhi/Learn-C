#include "stdio.h"
#define PI 3.14159265359

int area_main(){
//int main() {
    float radius, area, perimeter;
    printf("Enter radius of the circle");
    scanf("%f", &radius);

    area= PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Area of the circle is: %.2f\n", area);
    printf("Perimeter of the circle is: %.2f\n", perimeter);

    return 0;
}
