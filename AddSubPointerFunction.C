#include <stdio.h>
void add_sub(int num1, int num2, int*pAdd, int*pSub){
    
    int total_add=0, total_sub=0;
    total_add = num1 + num2;
    *pAdd= total_add;
    
    total_sub = num1-num2;
    *pSub = total_sub;

}
int main(void){
    int a=25, b=13;
    int sum=0, diff=0;
    add_sub(a,b, &sum, &diff);
    printf("The sum result = %d.\nThe difference result = %d.\n",sum,diff);
    
    return 0;
}