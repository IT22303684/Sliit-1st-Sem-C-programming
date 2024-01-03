#include <stdio.h>
//Code by Dasun Tharuka

int main()
{
	float amount , discount ;
	int type , quantity ;
	
	while(1){
		
		amount = 0.00;
		discount = 0.00 ;
		
		printf("Enter Pizza Type :");
		scanf("%d", &type);
		
		if(type == -1){
			break ;
		}
		
		if(type < 1 || type > 3){
			printf("Invalid pizza Type .!\n\n");
			continue ;
		}
		
		printf("Enter Quantity :");
		scanf("%d", &quantity);
		
		if(type == 1){
			amount = 1000.00 * (float)quantity ;
		}else if(type == 2){
			amount = 1600.00 * (float)quantity ;
		}else if(type == 3){
			amount = 1400.00 * (float)quantity ;
		}
		
		if(quantity > 3){
			if(type == 1){
				discount = amount * 10.00/100.00 ;
			}else if(type == 2){
				discount = amount * 12.00/100.00 ;
			}else if(type == 3){
				discount = amount * 15.00/100.00 ;
			}
		}
		
		amount = amount - discount ;
		
		printf("Total Price :%.2f\n\n", amount);
	}
	
	
	return 0;
}
