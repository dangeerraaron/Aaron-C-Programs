#include <stdio.h>  /* program to convert feet into meters */

double feet_to_meters(double x); /*function prototype*/

int main(void){
    
    double feet=0, conversion=0;
    
    printf("Please enter a number in feet to convert to meters: \n");
    scanf("%lf", &feet);
    conversion=feet_to_meters(feet);
    if(feet <= 1){
         printf("%.2lf foot is %.2lf meters", feet, conversion);
    }else{
        printf("%.2lf feet is %.2lf meters", feet, conversion);
    }
    return 0;
}

double feet_to_meters(double feet){
     double  result=0;
    result= feet / 3.281;
    return result;
}