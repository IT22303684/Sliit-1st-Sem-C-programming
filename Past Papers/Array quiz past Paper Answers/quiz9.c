//quiz9
//Code by Dasun Tharuka

#include <stdio.h>

int main()
{
	double price[6] = {0} ;
	double amount ;
	int i ;
	
	for(i = 0; i < 6 ; i++){
		printf("Input the price of book %d :", i+1);
		scanf("%lf", &amount) ;
		
		if(amount <= 0){
			printf("Please re-enter the amount\n");
			i-- ;
			continue ;
		}else {
			price[i] = amount ;
		}
	}
	
	
	for(i = 0 ; i < 6 ; i++){
		price[i] = price[i] - (price[i] * 10.00/100.00 ) ;
	}
	
	printf("\n\nBook ID          Price\n");
	
	for(i= 0 ; i < 6 ; i++){
		printf("%d                %.2lf\n", i+1 , price[i]);
	}
	
	
	
	return 0;
}
