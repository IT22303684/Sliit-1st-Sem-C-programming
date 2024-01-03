//Pizza paradise program
#include <stdio.h>

//Code by Dasun Tharuka

int main()
{
	int pizza_opt , no_of_pizza , option ;
	char size , yorn ;
	float price ;
	
	printf("Input Pizza Option :");
	scanf("%d", &pizza_opt);
	
	if(pizza_opt < 1 || pizza_opt > 3){
		printf("Invalid pizza option\n\n");
		return 1 ;
	}
	
	printf("size of pizza :");
	scanf(" %c", &size) ;
	
	if(size != 'P' && size != 'M' && size != 'L'){
		printf("Invalid pizza type \n\n");
		return 1;
	}
	
	printf("Number of pizza :");
	scanf("%d", &no_of_pizza);
	
	if(pizza_opt == 1){
		switch(size){
			case 'P':
			 	price = 560.00 ;
			 	break ;
			case 'M' :
				price = 920.00 ;
				break ;
			case 'L':
				price = 1800.00 ;
				break;
			default :
				break ;
		}
		
		
	}else if(pizza_opt == 2){
		switch(size){
			case 'P':
			 	price = 340.00 ;
			 	break ;
			case 'M' :
				price = 660.00 ;
				break ;
			case 'L':
				price = 1300.00 ;
				break;
			default :
				break ;
		}
		
	}else if(pizza_opt == 3){
		switch(size){
			case 'P':
			 	price = 760.00 ;
			 	break ;
			case 'M' :
				price = 1100.00 ;
				break ;
			case 'L':
				price = 2100.00 ;
				break;
			default :
				break ;
	}
	
}

	price = price * (float)no_of_pizza ;
	
	while(1){
		printf("Do you need any extra toppings (y/n) :");
		scanf(" %c", &yorn);
		
		if(yorn == 'Y' || yorn == 'y'){
			printf("      Input your option :");
			scanf(" %d", &option);	
			
			switch(option){
				case 1:
					price = price + 320.00 * (float)no_of_pizza;
					break ;
				case 2:
					price = price + 140.00 * (float)no_of_pizza;
					break ;
				case 3:
					price = price + 130.00 *  (float)no_of_pizza;
					break ;
				case 4:
					price = price + 150.00 * (float)no_of_pizza;
					break ;
				default :
					break ;
					
			}
		}else if(yorn == 'N' || yorn == 'n'){
			break ;
		}else {
			printf("Invalid input \n\n");
			continue ;
		}
		
	}
	
	printf("Total price :%.2f\n", price);
	
	
	return 0;
}
