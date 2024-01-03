#include <stdio.h>

//Code by Dasun Tharuka
int main()
{
	int type ;  //variable declare
	float bonus, salary , dailyPayment ;  //variable declare
	int days , num ;  //variable declare
	char yorn ;    //variable declare
	
	bonus = 0.00 ; 
	salary = 0.00 ;   
	
	
	while(1){
		printf("Enter the employee category (1,2,3):");
		scanf("%d", &type) ;
		
		if(type < 1 || type > 3){
			printf("Invalid employee category..Please try again..!\n\n");
			continue ;
		}
		
		if(type == 1){
			printf("Enter the basic salary :");
			scanf("%f", &salary) ;
			
			while(1){
				printf("Enter the performance based number(between 1- 3) :");
				scanf("%d", &num);
	
				if(num < 1 || num > 3){
					printf("Try again..! plz enter between 1- 3 number \n\n");
					continue ;
				}
				
				break ;	
			}
			
			bonus = salary * (float)num ;
			
		}else if(type == 2){
			printf("Enter the number of working days :");
			scanf("%d", &days) ;
			
			printf("Enter the daily payment :");
			scanf("%f", &dailyPayment);
			
			if(days > 240){
				bonus = dailyPayment * 20.00 ;
			}else{
				bonus = 0;
			}
		}else if(type == 3){
			
			bonus = 50000.00 ;
		}
		
		printf("Bonus amount = %.2f\n\n", bonus) ;
		
	 	printf("Do you want to continue (y/n) :");
	 	scanf(" %c", &yorn) ;
	 	
	 	if(yorn == 'Y' || yorn == 'y'){
	 		bonus = 0.00;
	 		continue ;
		 }else if(yorn == 'N' || yorn == 'n'){
		 	break ;
		 }else {
		 	printf("Invalid input..!\n\n");
		 	return 1;
		 }	
	
	}
	
	return 0;
}
