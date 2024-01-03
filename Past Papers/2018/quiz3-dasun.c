#include <stdio.h>
#include <assert.h>
#include <math.h>

//Code by Dasun Tharuka

float calDiscount(int time , float totAmount);
void testCaldiscount();
void displayGift(float finalTot);



int main()
{
	int time ;
	float amount ,discount ;
	 
	testCaldiscount() ;
	
	printf("Enter the time :");
	scanf("%d", &time) ;
	
	if(time != 16 && time != 17 && time != 18  && time != 20 && time != 21){
		printf("Invalid time !\n");
		return -1;
	}
	
	printf("Enter the total amount :") ;
	scanf("%f", &amount) ;
	
	discount = calDiscount(time, amount);
	
	
	printf("\n\nFinal amount  : %.2f",amount-discount );
	
	displayGift(amount-discount);
	

	return 0;
}

float calDiscount(int time , float totAmount)
{
	if(time >= 16 && time < 19){
		if(totAmount >= 5000){
			return totAmount * 10.00/100.00; 
		}else if(totAmount < 5000 && totAmount >= 2500){
			return totAmount * 7.00/100.00; 
		}
		
	}else if(time >= 20 && time < 22){
		if(totAmount >= 5000){
			return totAmount * 12.00/100.00; 
		}else if(totAmount < 5000 && totAmount >= 2500){
			return totAmount * 9.00/100.00; 
		}
	}else {
		return -1 ;
	}
}

void testCaldiscount()
{
	assert(fabs(calDiscount(17, 5000)-500)< 0.001) ;
	assert(fabs(calDiscount(21, 5000)-600)< 0.001) ;
}

void displayGift(float finalTot)
{
	if(finalTot >= 7000){
		printf("\nGift is : Packet of milk\n");
	}else if(finalTot >= 5000 && finalTot < 6999){
		printf("\nGift is : 1 Kg of sugar\n");
	}else if(3000 <= finalTot && finalTot < 4999){
		printf("\nGift is : Pack of 6 eggs\n");
	}
}
