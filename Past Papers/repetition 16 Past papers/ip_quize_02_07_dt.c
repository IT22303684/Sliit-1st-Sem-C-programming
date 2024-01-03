#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	float avg , sum ;
	int mark  , i ;
	
	avg = 0.00;
	sum = 0.00 ;
	
	for(i=1; i <= 5; i++){
		printf("Input the mark %d :", i);
		scanf("%d", &mark);
		
		if(mark<0 || mark > 100){
			printf("Invalid Input !\n");
			i-- ;
			continue ;
		}
		
		sum = sum + (float)mark ;	
	}
	
	avg = sum / 5.00 ;
	
	printf("\n\nAvergae Of the % marks is :%.2f", avg);
	
	
	
	return 0 ;
}
