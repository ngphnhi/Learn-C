#include "stdio.h"

//int baitap45_main(){
int main(){
    int wage = 12000, HRA = 150, TA = 120, others = 450;
    float DA, Tax, PF, IT, actualwage;
    DA = 0.12 * wage;
    PF = 0.14 * wage;
    IT = 0.15 * wage;
    Tax = PF + IT;
    actualwage = wage + DA + HRA + TA + others - ( PF + IT);
    printf("Actual wage is: %.2f", actualwage);
    return 0;
}