#include <stdio.h>
//quiz 1 
//dasun

int main()
{
	int rooms , nights ;
	char type, method , choose ;
	float charge = 0.00 , discount = 0.00 ;
	
	while(1){
		printf("Enter the Rooom Type :");
		scanf(" %c", &type) ;
		
		if(type != 'D' && type != 'S' && type != 'C' && type != 'E' && type != 'P' ){
			printf("Invalid Room Type ! \n");
			return -1 ;
		}
		
		printf("Enter the Number of rooms :");
		scanf(" %d", &rooms) ;
		
		printf("Enter the Number of nights :");
		scanf("%d", &nights) ;
		
		printf("Enter the paying method(M/C) :");
		scanf(" %c", &method) ;
		
		if(method != 'M' && method != 'm' && method != 'C' && method != 'c'){
			printf("Invalid payment method !\n");
			return -1 ;
		}
		
		if(type == 'D'){
			charge = 31000.00;
		}else if(type == 'S'){
			charge = 35000.00;
		}else if(type == 'C'){
			charge = 50000.00;
		}else if(type == 'E'){
			charge = 75000.00;
		}else if(type == 'P'){
			charge = 100000.00;
		}
		
		charge = charge * (float)rooms * (float)nights ;
		
		if(method == 'C' || method == 'c'){
			discount = charge * 10.00/100.00 ;
		}else {
			discount = 0.00;
		}
		
		charge = charge - discount ;
		
		printf("\n---------------------------------------------------\n");
		printf("Total amount payble to the Hotel : Rs  %.2f",charge);
		printf("\n---------------------------------------------------\n");
		
		printf("\n\n") ;
		printf("Do you want to Continue ? (y/n) :");
		scanf(" %c", &choose) ;
		
		if(choose == 'Y' || choose == 'y'){
			charge = 0.00 ;
			discount = 0.00;
			continue ;
		}else if(choose == 'N' || choose == 'n'){
			break ;
		}else {
			printf("Invalid input !\n");
			break ;
		}
	}
	
	
	
	return 0 ;
}
