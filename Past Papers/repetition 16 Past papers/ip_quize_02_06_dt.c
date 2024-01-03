#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	int type , quantity ;
	float total ;
	
	while(1){
		
		total = 0.00; 
		quantity = 0 ;
		
		printf("Enter Burger Type :");
		scanf("%d", &type) ;
		
		if(type == -1){
			break ;
		}
		
		if(type <1 || type > 3){
			printf("Invalid burger Type..!\n\n");
			continue ;
		}
		
		printf("Enter Quantity :");
		scanf("%d", &quantity);
		
		total = 500.00 * (float)quantity ;
		
		if(type == 2){
			total = total + (50.00*(float)quantity);
		}else if(type == 3){
			total = total + (100.00*(float)quantity) ;
		}
		
		printf("Total Price : %.2f\n\n", total);
	}
	
	return 0;
}
