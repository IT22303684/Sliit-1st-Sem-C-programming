#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	float price , amount;
	int item_no , quantity ;
	
	while(1){
		printf("Enter item :");
		scanf("%d", &item_no);
		
		if(item_no == -1){
			break ;
		}
		
		if(item_no < 1 || item_no > 3){
			printf("Invalid item Number.. !\n\n");
			continue ;
		}
		
		printf("Enter Quantity :");
		scanf("%d", &quantity);
		
		if(item_no == 1){
			price = 300.25 * (float)quantity;
		}else if(item_no == 2){
			price = 145.50 * (float)quantity;
		}else if(item_no == 3){
			price = 525.00 * (float)quantity ;
		}
		
		amount = amount + price ;
		
		printf("\n\n");
	}
	
	printf("\nTotal Price to Pay :%.2f\n", amount);
	
	
	
	return 0 ;
}
