//array quiz 2
//Code by Dasun Tharuka

#include <stdio.h>

int main()
{
	int intArr[10] = {0} ;
	int positiveNum[10] = {0} ;
	int negativeNum[10] = {0} ;
	int i , p_count = 0 , n_count = 0;
	
	for(i= 0 ; i < 10 ; i++){
		printf("Enter a number %d :", i+1) ;
		scanf("%d", &intArr[i]) ;
	}
	
	for(i= 0 ; i < 10 ; i++){
		if(intArr[i] >= 0 ){
			positiveNum[p_count++] = intArr[i] ;
		}else {
			negativeNum[n_count++]  = intArr[i] ;
		}
	}
	
	printf("\nNumber series :");
	for(i = 0 ; i < 10 ; i++){
		printf("%d  ", intArr[i]) ;
	}
	
	printf("\nPositive numbers :");
	for(i = 0 ; i < p_count ; i++){
		printf("%d  ", positiveNum[i]);
	}
	
	printf("\nNegative numbers :");
	for(i = 0 ; i < n_count ; i++){
		printf("%d  ", negativeNum[i]);
	}
	
	
	
	
	
	return 0;
}
