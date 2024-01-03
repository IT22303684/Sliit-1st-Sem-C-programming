//quiz 8
//Code by Dasun Tharuka

#include <stdio.h>

int main()
{
	double sales[5] = {0} ;
	double num ;
	int i ;
	
	for(i = 0 ; i < 5 ; i++){
		printf("Input the sales of selesmen %d :", i+1);
		scanf("%lf", &num) ;
		
		if(num < 0){
			printf("Please re-enter the amount\n");
			i-- ;
			continue; 
		}else {
			sales[i] = num ;
		}
			
	}
	
	printf("\nSales person number         sales amount\n");
	for(i = 0 ; i < 5 ; i++){
		if(sales[i] > 20000){
			printf("%d                            %.2lf\n", i+1 , sales[i]) ;
		}
	}
	
	
	
	
	
	
	return 0;
}
