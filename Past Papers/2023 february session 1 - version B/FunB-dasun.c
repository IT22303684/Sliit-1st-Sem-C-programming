#include <stdio.h>
#include <assert.h>
#include <math.h>

//code by Dasun Tharuka

float calPayment(int pType, float totalData);
float calcTax(float payment);
void displayDetails(float payment , float tax);



int main()
{
	
	int i ; 
	int typ ;
	float data_usage ;
	
	assert(fabs(calPayment(1,1.5)-120.00)<0.001) ;
	assert(fabs(calPayment(2,5)-350.00)<0.001) ;
	assert(fabs(calPayment(1,2)-1144.00)<0.001) ;
	
	
	
	for(i = 0 ; i < 3 ; i++){
		printf("Customer %d \n", i+1);
		
		printf("   Package type :");
		scanf("%d", &typ) ;
		if(typ < 1 || typ > 4){
			printf("Invalid package type !\n\n");
			i-- ;
			continue ;
		}
		
		printf("   Total data usage :");
		scanf("%f", &data_usage) ;
		
		
		displayDetails(calPayment(typ,data_usage),calcTax(calPayment(typ,data_usage)) );
		
		printf("\n\n") ;
	}
	
	
	
	return 0;
}

float calPayment(int pType, float totalData)
{
	float charge ;
	
	switch(pType){
		case 1:
			if(totalData > 1.5){
				charge = 120.00 + (totalData-1.5) * 1024.00 * 2.00 ;
			}else {
				charge = 120.00 ;
			}
			break ;
		case 2:
			if(totalData > 5){
				charge = 350.00 + (totalData-5) * 1024 * 1.50 ;
			}else {
				charge = 350.00 ;
			}
			break ;
		case 3:
			if(totalData > 10){
				charge = 660.00 + (totalData-10) * 1024 * 1 ;
			}else {
				charge = 660.00 ;
			}
			break ;
		case 4:
			if(totalData > 20){
				charge = 1200.00 + (totalData-20) * 1024 * 0.50 ;
			}else {
				charge = 1200.00 ;
			}
			break ;
		default :
			charge = 0.00; 
			break ;
	}
	
	return charge ;
}

float calcTax(float payment)
{
	return payment * 5.00/100.00 ;

}

void displayDetails(float payment , float tax)
{
	printf("\nPayment           Tax amount          Monthly bill amount\n");
	printf("%.2f             %.2f                   %.2f  ", payment , tax , payment+tax);
}
