/* C program to perform all arithmetic operations */

#include <stdio.h>

int main(void){
    
    int num1=0, num2=0;
    int Sum=0, Difference=0, Product=0, Modulus=0;
    float Quotient=0;
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    
    Sum = num1 +num2;
    Difference = num1 - num2;
    Product = num1 * num2;
    Quotient= (float)num1 / num2;
    Modulus= num1 % num2;
    
    printf("Sum = %d\n",Sum);
    printf("Difference = %d\n", Difference);
    printf("Product = %d\n", Product);
    printf("Quotient = %f\n", Quotient);
    printf("Modulus = %d\n", Modulus);

    return 0;
}