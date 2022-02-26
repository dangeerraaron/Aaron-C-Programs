


/* program for a simple calculator */

#include <stdio.h>

int main (void){
    
    double num1=0, num2=0;
    double sum=0, difference=0, product=0, quotient=0;
    char operation=0;
    
    printf("Please enter the mathematical operation to perform. Enter as '+ , - , * , / : \n");
    scanf("%s", &operation);
    
    printf("Please enter two numbers for computation, separated by a space:\n");
    scanf("%lf %lf", &num1, &num2);
    
    if(operation == '+'){
        sum = num1 + num2;
        printf("\nThe sum is %.2lf", sum);
    }else if(operation == '-'){
        difference = num1 - num2;
        printf("\nThe difference is %.2lf", difference);
    }else if(operation == '*'){
        product = num1 * num2;
        printf("\nThe product is %.2lf", product);
    }else if(operation == '/'){
        quotient = num1 / num2;
        printf("\nThe quotient is %.2lf", quotient);
    }else{
         printf("\nOperation not recognized, please enter valid operation.");
    }
    
    return 0;