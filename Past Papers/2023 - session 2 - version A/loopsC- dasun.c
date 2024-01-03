#include <stdio.h>
//GooYo - session 2- version A- dt
//code by Dasun Tharuka

int main()   //function main begins program execution
{
	char type , yorn , service ;  //declare variables
	int participants ;  //declare variables for no of [articipants
	float cost , discount ;   //declare variables for total cost and dicount 
	
	cost = 0.00;
	discount = 0.00 ;
	
	
	printf("Package Type (G/S/B) :");  //prompt the user for package type
	scanf("%c", &type) ;   //read the package type from user
	
	if(type != 'G' && type != 'S' && type != 'B'){
		printf("Invalid package type..!");    //display error msg for invalid input
		return -1;  //exit the program with error status
	}
	
	printf("No of participants :");  //prompt the user for no of participants
	scanf("%d", &participants) ;   //read the participants from user
	
	if(participants < 0){
		printf("\nInvalid input !\n");  //error msg for invalid input
		return 1;   //exit the program with error status
	}
	
	//calculate cost by pakage type
	if(type == 'G'){
		cost = 20000.00 * (float)participants ;
	}else if(type == 'S'){
		cost = 15000.00 * (float)participants ;
	}else if(type == 'B'){
		cost = 10000.00 * (float)participants ;
	}  //end if
	
	//calculate discount
	if(participants > 10){
		discount = cost * 10.00/100.00 ;
		cost = cost - discount ; 
	}
	
	
	//additional service pakage cost calculate
	while(1){
		printf("Do you want an additioiial Services(y/n) :");   //prompt the user
		scanf(" %c", &yorn) ;   //read the yes or no from user
		
		if(yorn == 'Y' || yorn == 'y'){
			printf("Enter the service you like to book :");  //prompt 
			scanf(" %c", &service) ;  //read service from user
			
			switch(service){
				case 'C':
					cost = cost + 5000.00 ;
					break ;
				case 'V':
					cost = cost + 7500.00 ;
					break ;
				case 'E':
					cost = cost + 10000.00 ;
					break ;
				default :
					cost = 0.00 ;
					printf("Invalid addtional service letter..!\n\n");
					break ;
				
			}
		}else if(yorn == 'N' || yorn == 'n'){
			break ;
		}else {
			printf("Invalid input\n\n");
			continue ;
		}
	}
	

	
	printf("\n\nTotal Amount to be Paid: Rs %.2f", cost);
	
	
	
	return 0;  //exit the program with success status
}  //end of the main function
