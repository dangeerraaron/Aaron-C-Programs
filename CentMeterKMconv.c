  /*convert centimeters in meters and kilometers, using a function*/

#include <stdio.h>

double centimeter_conv(double x);
double centimeter2_conv(double y);

int main (void){
    
    double centimeter=0, conversion=0, conversion_two=0;
    printf("Enter length in centimeter.\n");
    scanf("%lf", &centimeter);
    conversion = centimeter_conv(centimeter);
    conversion_two = centimeter2_conv(centimeter);
    printf("Length in meter = %.2lf \nLength in kilometer = %.2lf",conversion, conversion_two);
    
    
    return 0;
}

    double centimeter_conv(double centimeter){
        double  result = 0;
        result= centimeter / 1000;
        return result;
    }
    
    double centimeter2_conv(double centimeter){
        double result =0;
        result = centimeter / 100000;
        return result;
    }
  
