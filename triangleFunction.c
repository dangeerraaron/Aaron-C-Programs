/* function for area of triangle */
#include <stdio.h>

#define max_size 1000

double triangle_area(double x, double y); /*function prototype*/

int main(void){
    
    double height=0, base=0, total_area=0; /* declared and initialized variables */
    int i=0;
    char unit[max_size];
    
    printf("Please enter the unit of measure:\n");
    scanf("%s", &unit[i]);
    printf("Please enter the height of the triangle:\n");
    scanf("%lf", &height);
    printf("Please enter the base of the triangle:\n");
    scanf("%lf", &base);
    
    total_area = triangle_area(height, base);
    
    printf("The area of the triagle is %.2lf %s", total_area, unit);
    
    return 0;
}

double triangle_area(double height, double base){ /*triangle area calculation function*/
    double result=0;
    result = (base * height) / 2;
    return result;
}