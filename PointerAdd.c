#include <stdio.h>

int main(void){

	int a,b,c, sum;
	int *p, *k, *y;
	p=&a, k=&b, y=&c;

    *p=5, *k=26, *y=8;
	
	sum= a + b +c;
	
	printf("The sum is %d", sum);

    return 0;
}