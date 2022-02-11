

#include <stdio.h> /* program to convert milliliters to teaspoons*/

double milliliters_to_teaspoon(double x);

int main (void){
    
    double milliliters=0, conversion=0;
    printf("Please enter the amount of milliliters you would like to convert to teaspoons:  ");
    scanf("%lf", &milliliters);
    conversion= milliliters_to_teaspoon(milliliters);
    printf("%.4lf mls is equal to %.4lf teaspoons", milliliters, conversion);
    return 0;
}


double milliliters_to_teaspoon(double milliliters ){
    double result=0;
    result= milliliters / 4.929;
    return result;
    
}