#include <stdio.h>
//Code by Dasun Tharuka

int main()
{
	int itemNo , quantity ;
	float total , price;
	
	total = 0.00 ;
	
	while(1){
		
		price = 0.00 ;
		
		printf("Enter item :");
		scanf("%d", &itemNo);
		
		if(itemNo == -99){
			break ;
		}
		
		if(itemNo < 1 || itemNo > 3){
			printf("Invalid item no.!");
			continue ;
		}
		
		printf("Enter Quantity :");
		scanf("%d", &quantity);
		
		if(itemNo == 1){
			price = 30.00 * (float)quantity ;
		}else if(itemNo == 2){
			price = 45.00 * (float)quantity ;
		}else if(itemNo == 3){
			price = 55.50 * (float)quantity ;
		}
		
		total = total + price ;
		printf("\n");
	}
	
	printf("\n\nTotal Price to pay Rs : %.2f\n", total);
	
	
	return 0 ;
}
