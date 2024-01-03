#include <stdio.h>

//Code by Dasun Tharuka

struct customer{
	int accNo ;
	char name[20];
	char transTyp ;
	float amount ;
}cus[4];

int main()
{
	float totaldeposit ;
	float totalwithdraw ;
	float max , min ;
	int maxflag , minflag ;
	int i ;
	
	for(i = 0 ; i < 5 ; i++){
		printf("Customer %d \n", i+1);
		printf("   Enter the customer Account number :");
		scanf("%d", &cus[i].accNo);
		
		printf("   Enter the customer Account name :");
		scanf("%s", cus[i].name) ;
		
		printf("   Enetr the customer Transection Type (D/W) :");
		scanf(" %c", &cus[i].transTyp) ;
		
		if(cus[i].transTyp == 'W' || cus[i].transTyp == 'w'){
			printf("      Enter the withdraw amount :");
			scanf("%f", &cus[i].amount ) ;
			totalwithdraw += cus[i].amount ;

				if(min > cus[i].amount){
					min = cus[i].amount ;
					minflag = i ;
				}
			
		}else if(cus[i].transTyp == 'D' || cus[i].transTyp == 'd'){
			printf("      Enter the Deposit amount :");
			scanf("%f", &cus[i].amount ) ;
			totaldeposit += cus[i].amount ;

				if(max < cus[i].amount){
					max = cus[i].amount ;
					maxflag = i ;
				}

		}
		
		if(i == 0){
				min = cus[i].amount ;
				max = cus[i].amount ;
				minflag = i ;
				maxflag = i ;
		}
	}
	
	printf("\n------------------------------------------\n") ;
	
	printf("Total deposit amount : %.2f\n", totaldeposit);
	printf("Total withdraw amount : %.2f\n", totalwithdraw);
	printf("Name of the customer with the maximum deposit amount : %s \n",cus[maxflag].name);
	printf("Name of the customer with the minimum withdraw amount : %s \n" ,cus[minflag].name) ;
	
	
	
	return 0;
}
