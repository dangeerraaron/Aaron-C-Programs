/* function to find the circumference of a circle with known diameter OR radius*/

#include <stdio.h>

double circumference_diameter(double x);
double circumference_radius(double y);

int main (void){
    
    double radius=0, diameter=0, conversion=0;
    int i=0;
    char c[20];
    printf("Enter 'd' for diameter OR 'r' for radius: \n");
    scanf("%c", &c[i]);
    
    if(c[i] == 'd'){
        printf("Enter the diameter and unit of measurement:\n");
        scanf("%lf %s", &diameter, &c[i]);
        conversion = circumference_diameter(diameter);
        printf("\nThe circumference is %.2lf %s", conversion, c);
    }else if(c[i]== 'r'){
        printf("Enter the radius and unit of measurement:\n");
        scanf("%lf %s", &radius, &c[i]);
        conversion = circumference_radius(radius);
        printf("\nThe circumference is %.2lf %s", conversion, c);
    }else{
        printf("\nCharacter not recognized, program terminated.");
    }
    
    return 0;
}

double circumference_diameter(double diameter){
    double result=0;
    result = diameter * 3.1415926;
    return result;
}

double circumference_radius(double radius){
    double result=0;
    result= (3.1415926* 2) * radius;
    return result;