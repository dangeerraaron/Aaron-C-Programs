#include <stdio.h> /* price discount calculator */

int main (void){
	
	double article_price =0, disc_amt=0, new_price=0; 
	int ch=0;
	
	
	printf("Please enter the article price: $");
	scanf("%lf", &article_price);
	
	printf("Please enter the discount code 1, 2, 3, 4, or 5: ");
	scanf("%d", &ch);
	
	if(ch == 1){
		
		disc_amt = 0.5 * article_price;
		new_price = article_price - disc_amt;
		printf("\n Original price is $ %.2lf.\n The discounted amount is $ %.2lf.\n The new price is $  %.2lf.\n", article_price, disc_amt, new_price);
		
	}else if(ch == 2){
		
		disc_amt = 0.4 * article_price;
		new_price = article_price - disc_amt;
		printf("\n Original price is $ %.2lf.\n The discounted amount is $ %.2lf.\n The new price is $  %.2lf.\n", article_price, disc_amt, new_price);
		
	}else if(ch == 3){
		
		disc_amt = 0.33 * article_price;
		new_price = article_price - disc_amt;
		printf("\n Original price is $ %.2lf.\n The discounted amount is $ %.2lf.\n The new price is $  %.2lf.\n", article_price, disc_amt, new_price);
		
	}else if(ch == 4){
	    
	    disc_amt = 0.25 * article_price;
		new_price = article_price - disc_amt;
		printf("\n Original price is $ %.2lf.\n The discounted amount is $ %.2lf.\n The new price is $  %.2lf.\n", article_price, disc_amt, new_price);
	
	}else if(ch == 5){
		
		printf("No discount.\n");
		
	}else if (ch != 1 || 2 || 3 || 4 || 5){
		
		printf("Invalid pricing code.\n");
	}	
	
	
	return 0;
	
}