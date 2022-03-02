#include <stdio.h>
#include <stdlib.h>

/* modular programming example with multiplication and division */

double multiply(double num1, double num2){ //function to multiple and return result
	
	return num1 * num2;
}

double divide(double num1, double num2){ //function to divide and return result
	
	return num1 / num2;
	
}

int main(void){

 double num1=0, num2=0, quotient=0, dividend=0;
 printf("Please enter two numbers to multiply and divide: " );
 scanf("%lf %lf", &num1, &num2);
 
 quotient = multiply(num1, num2); //function call for multiplication
 dividend = divide(num1, num2); //function call for division
 
 printf("The result is %.2lf for multiplication\nThe result is %.2lf for division\n", quotient, dividend);

 return 0;
}