
#include <stdio.h> /* program to convert minutes to seconds*/

double minute_to_second(double x); //function prototype

int main (void){
    
    double minute_amt=0, conversion;
    printf("Enter time in minutes you would like to convert to seconds: \n");
    scanf("%lf", &minute_amt);
    conversion= minute_to_second(minute_amt);
    if(minute_amt==1){
        printf("%.3lf minute is equal to %.3lf seconds", minute_amt, conversion);
    }else if(minute_amt >= 2){
        printf("%.3lf minutes is equal to %.3lf seconds", minute_amt, conversion);
    }else{
        printf("Time does not exist!");
    }

    
    return 0;
}

double minute_to_second(double minute_amt){ //function 
    double result=0;
    result= minute_amt * 60;
    return result;
}
