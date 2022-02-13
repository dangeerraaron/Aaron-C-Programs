#include <stdio.h>

/* program for finding cups of water for rice amount */

double water_rice_ratio(double x);

int main (void){
    
    double rice_amount=0, cups_water=0;
    printf("How many cups of rice are you making ?: \n");
    scanf("%lf", &rice_amount);
    cups_water= water_rice_ratio(rice_amount);
    printf("%.2lf cups of water are needed for %.2lf cups of rice.", cups_water, rice_amount);

   
    return 0;
}

double water_rice_ratio(double rice_amount){
    double result=0;
    result= 1.5 * rice_amount;
    return result;
}
