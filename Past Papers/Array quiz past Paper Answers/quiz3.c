//arrays quiz 3
//Code by Dasun Tharuka

#include <stdio.h>

int main()
{
	int myArray[10] ;
	int largeNum[10] ;
	float total , avg ;
	int i , largecount = 0; ;
	
	
	printf("Enter the number series :\n");
	for(i= 0 ; i < 10 ; i++){
		printf("   Number %d :", i+1) ;
		scanf("%d", &myArray[i]) ;	
	}
	
	
	for(i = 0 ; i < 10 ; i++){
		total = total + myArray[i] ;

 	}
 	
 	avg = total / 10.00 ;
 	printf("\nAverage :%.1f", avg) ;
 	
 	printf("\nMy Array :");
 	for(i = 0 ; i < 10 ; i++){
 		printf("%d  ", myArray[i]);
 		if(myArray[i] > avg){
 			largeNum[largecount++] = myArray[i] ;
		 }
	}
	
	printf("\nLargeNum :");
	for(i = 0 ; i < largecount ; i++ ){
		printf("%d  ", largeNum[i]);
	}
 	
 	
	
	
	return 0;
}
