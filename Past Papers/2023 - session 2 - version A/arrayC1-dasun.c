#include <stdio.h>

//code by Dasun Tharuka

int main()
{
	float rainfall[7] ;
	float avg , sum , max , min; 
	int i , j , k;
	sum =0.00 ;
	
	for(i = 0 ; i < 7 ; i++){
		printf("Enter the rainfall day %d :", i+1);
		scanf("%f", &rainfall[i]) ;
	}
	
	for(i = 0 ; i < 7 ; i++){
		for(j = 0 ; j <= i ; j++){
			
			if(j == 0){
				max = rainfall[j] ;
				min = rainfall[j] ;
			}else {
				if(max < rainfall[j]) {
				max = rainfall[j] ;
			}
				if(min > rainfall[j]){
					min = rainfall[j];
				}
			}
			sum = sum + rainfall[j] ;
		}
		
		avg = sum /(i+1.00) ;
	
		printf("Day 1 to %d\n",i+1);
		printf("Avergae rainfall :%.2f mm\n", avg);
		printf("Maximun rainfall : %.2f mm\n", max);
		printf("Minimum rainfall :%.2f mm\n\n", min);
		
		sum = 0.00; 
		avg = 0.00 ;
		
	}

	return 0;
}
