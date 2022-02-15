
/* program to convert pounds to kilograms and kilograms to pounds */

#include <stdio.h>

double lbs_to_kg(double x);
double kg_to_lbs(double y);

int main(void)
{
    double lbs=0, kg=0, conversion=0;
    char c;
    printf("Enter pounds or kilograms with 'p' for pounds and 'k' for kilograms. \n");
    scanf("%c", &c);
   
    if(c=='p'){
        printf("Please enter weight in pounds to convert:\n ");
        scanf("%lf", &lbs);
        conversion = lbs_to_kg(lbs);
   
    printf("%.2lf pounds is equal to %.2lf kilograms.",lbs, conversion);
   
    }else if(c=='k'){
        printf("Please enter weight in kilogram to convert: \n");
        scanf("%lf", &kg);
        conversion = kg_to_lbs(kg);
       
        printf("%.2lf kilograms is equal to %.2lf pounds.",kg, conversion);
       
    }else{
        printf("Error, input not recognized.");
    }
   
    return 0;
}

double lbs_to_kg(double lbs){
    double result=0;
    result = lbs / 2.205;
    return result;
}

double kg_to_lbs(double kg){
    double result=0;
    result = kg * 2.205;
    return result;