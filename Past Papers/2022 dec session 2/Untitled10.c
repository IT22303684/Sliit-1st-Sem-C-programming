#include <stdio.h>
//code by Dasun Tharuka

int main()
{
	int rooms , nights ;
	char roomtyp , method , yorn ;
	float amount , discount ;
	while(1){
		printf("Enter the room type (D/S/C/E/P) :");
		scanf(" %c", &roomtyp) ;
		
		if(roomtyp != 'D' && roomtyp != 'S' && roomtyp != 'C' && roomtyp != 'E' && roomtyp != 'P'){
			printf("Invalid Room type !\n");
			return -1 ;		
		}
		
		printf("Enter the number of rooms :");
		scanf("%d", &rooms) ;
		
		printf("Enter the number of nights :");
		scanf("%d", &nights) ;
		
		printf("Enter the paying method(Cash -M / Credit card- C) :");
		scanf(" %c", &method) ;
		
		if(roomtyp == 'D'){
			amount = 31000.00 ;
		}else if(roomtyp == 'S'){
			amount = 35000.00 ;
		}else if(roomtyp == 'C'){
			amount = 50000.00 ;
		}else if(roomtyp == 'E'){
			amount = 75000.00 ;
		}else if(roomtyp == 'P'){
			amount = 100000.00 ;
		}
		
		amount = amount * rooms * nights ;
		
		if(method == 'C'){
			discount = amount * 10.00/100.00 ;
		}else {
			discount = 0.00;
		}
		
		amount = amount - discount ;
		
		printf("\nTotal amount = %.2f\n", amount) ;
		printf("----------------------------\n");
		
		printf("Do you want to continue ? :");
		scanf(" %c", &yorn) ;
		
		if(yorn == 'Y' || yorn == 'y'){
			discount = 0.00;
			amount =0.00 ;
			continue ;
		}else if(yorn == 'N' || yorn == 'n'){
			break ;
		}else {
			printf("Invalid input\n");
			break ;
		}
		
	}
	
	
	return 0;
}

