#include <stdio.h>
#include <math.h>
#include <assert.h>

//code by Dasun Tharuka

//dasun tharuka

float calcPayment(int age , float size);   //function to calculate payment  based on the age and size
float calSubsidy(float payment);     //function to calculate subsidy based on the payment
void displayDetails(float payment , float subsidy);  //function to display the payble amount and subsidy amount



int main()   //function main begins program execution
{
	int i , age ;  //declare variables for loop and age
	float size ;  //declare variable for paddy field size
	
	//test calPayment function
  	assert(fabs(calcPayment(0,2.00)- 4200.00) < 0.001) ;
  	assert(fabs(calcPayment(3,2.00)- 4080.00) < 0.001) ;
  	assert(fabs(calcPayment(5,2.00)- 12590.00) < 0.001) ;
  	assert(fabs(calcPayment(8,2.00)- 4080.00) < 0.001) ;

	
	//loop 3 times
	for(i = 0 ; i < 3 ; i++){
		printf("Farmer %d :\n", i+1) ;
		printf("   The age of the paddy crops in week :");  //prompt the user for age of the paddy crops
		scanf("%d", &age) ;   //read the age from user
		
		printf("   The paddy field size in Hectare :");  //prompt the user for paddy field size
		scanf("%f", &size) ;   //read the size from user
		
		//calculate the payment , subsidy and display
		displayDetails(calcPayment(age,size), calSubsidy(calcPayment(age,size)));
		
		printf("\n\n") ;  //new lines
		
		
	}  //end for loop
	
	
	
	return 0;  //exit the program with success status
}  //end of the main function

//calculate payment based on age and size
float calcPayment(int age , float size)
{
	if( age >= 0 && age < 2 ){    //aged 0 -1 weeks
		
		return (size * 35 *60.00) ;  
		
	}else if( age >= 2 && age < 4 ){   //aged 2 -3 weeks
		
		return (size * 30 * 68.00) ;
		
	}else if( age >= 4 && age < 6 ){   //aged 4 -5 weeks
		
		return (size * 65 * 68.00) + (size * 25 * 75.00) ;
		
	}else if( age >= 6 && age < 7 ){   //aged 6 weeks
		
		return (size * 50 * 68.00) + (size * 25 * 75.00) ;
		
	}else if( age >= 7 ){   //aged 7 weeks or more
		
		return (size * 30 * 68.00) ;
	}else {
		return -1 ;  //exit the program with error status
	}
}

//calculate subsidy based on the payment amount
float calSubsidy(float payment)
{
	return payment * 15.00/100.00 ;
}

//display the payble amount and subsidy
void displayDetails(float payment , float subsidy)
{
	printf("\n\nPayble amount         Subsidy amount\n");  
	printf("%.2f                    %.2f\n", payment-subsidy , subsidy);   //display payble amount and subsidy amount
}
