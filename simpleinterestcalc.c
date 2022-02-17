/* function to calculate simple interest*/

#include <stdio.h>

double simple_interest(double x, double y, double z);

int main (void){
    
    double principle=0, rate=0, time=0, calculation=0;
    char unit[20];
    int i=0;
    
    printf("Enter the principle amount and type of currency: \n");
    scanf("%lf %s", &principle, &unit[i]);
    printf("Enter the interest rate: \n");
    scanf("%lf", &rate);
    printf("Enter the time: \n");
    scanf("%lf", & time );
    
    calculation = simple_interest(principle, rate, time);
    
    printf("The simple interest is %.2lf %s", calculation, unit);
    
    return 0;
}