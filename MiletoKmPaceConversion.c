
#include <stdio.h>
 
double miles_to_km (double x);

/* program to convert minutes per mile to km per mile */

int main (void){
    
    double mile_min=0, conversion=0, conversion_seconds=0;
    printf("Please enter you running pace in minutes per mile: \n");
    scanf("%lf", &mile_min);
    conversion = miles_to_km(mile_min);
    printf("%.3lf minutes per mile is equal to %.3lf minutes per kilometer.", mile_min, conversion);
    
    return 0;
}

 double miles_to_km (double mile_min){
     double result;
     result = mile_min / 1.609;
     return result;
 }