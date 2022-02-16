#include <stdio.h>

double USA_to_Convert(double x, double y);

#define MaxSize 100
/*program to convert US dollars to desired currency based on daily exchange rate*/

int main(void){
    double USA_dollars=0, conversion=0, exchange=0;
    char country[MaxSize], currency[MaxSize];
    int i=0;
    
    printf("Please enter the amount of USA dollars to convert: \n");
    scanf("%lf", &USA_dollars);
    printf("Please enter the country's name and currency name: \n");
    scanf("%s %s", &country[i], &currency[i]);
    printf("Please enter the current exchange rate: \n");
    scanf("%lf", &exchange);
    conversion = USA_to_Convert(USA_dollars, exchange);
    printf("%.2lf US Dollars is equal to %.2lf %s in %s.", USA_dollars, conversion, currency, country);
    
    
    return 0;
}

 double USA_to_Convert(double USA_dollars, double exchange){
     double result=0;
     result = USA_dollars / exchange;
     return result;
 }