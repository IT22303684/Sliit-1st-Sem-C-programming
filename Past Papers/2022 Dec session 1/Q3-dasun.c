#include <stdio.h>
#include <math.h>
#include <assert.h>

//quiz 3-dasun

float calcInterest(int FDType,float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interst,float taxAmount);



int main()
{
	int type ;
	float amount ;
	
	printf("------------------------ABC BANK-----------------------\n");
	printf("Fixed deposit Type     Description       Annual interst rate(%)\n");
	printf("1                      12 Months Fd            16.00 \n");
	printf("2                      24 Months Fd            15.00 \n");
	printf("3                      36 Months Fd            15.50 \n");
	printf("4                      48 Months Fd            17.50 \n");
	
	printf("------------------------------------------------------------\n\n");
	
	assert(fabs(calcInterest(1,2000)-320.00)< 0.01);
	assert(fabs(calcInterest(2,2000)-300.00)< 0.01);
	
	while(1){
		printf("Fixed Deposit Type (exit for -1):");
		scanf("%d", &type) ;
		
		if(type == -1){
			break ;
		}
		
		if(type < 1 || type > 4){
			printf("Invalid input\n");
			continue ;
		}
		
		printf("Deposit amount :");
		scanf("%f", &amount) ;
		
		printf("\n");
		displayDetails(calcInterest(type,amount), calcTax(calcInterest(type,amount)));
		
		
		amount = 0.00 ;
		printf("\n\n");
		
	}
	
	
	
	return 0;
}

float calcInterest(int FDType,float depositAmount)
{
	float interest = 0.00 ;
	switch(FDType){
		case 1:
			interest = depositAmount * 16.00/100.00 ;
			break;
		case 2:
			interest = depositAmount * 15.00/100.00 ;
			break;
		case 3:
			interest = depositAmount * 15.50/100.00 ;
			break;
		case 4:
			interest = depositAmount * 17.50/100.00 ;
			break;
		
	}
	
	return interest ;
}

float calcTax(float annualInterest)
{
	 return annualInterest * 5.00/100.00 ;
}

void displayDetails(float interst,float taxAmount)
{
	printf("Annual Interst     Tax Amount        Amount Payable\n");
	printf("  %.2f                %.2f           %.2f\n", interst ,taxAmount ,interst-taxAmount );
}
