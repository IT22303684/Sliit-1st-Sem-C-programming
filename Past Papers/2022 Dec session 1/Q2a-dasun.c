#include <stdio.h>
//2022 - q2 - dt


int main()
{
	int numArr[8] ;
	int newArr[8]  ;
	int temp , temp2 ;
	int i , n ;
	
	for(i = 0 ; i < 8 ; i++){
		printf("Enter the number %d :", i+1);
		scanf("%d", &numArr[i]);
	}
	
	printf("\n");
	printf("Array elements are :\n");
	for(i = 0 ; i < 8 ; i++){
		printf("%d  ",numArr[i]) ;
	}
	
	printf("\n");
	while(1){
		printf("\nEnter the value N (0-8) :");
		scanf("%d", &n);
			
		if(n <= 0 || n >= 8){
			printf("invalid input for N\n");
			continue ;
		}
		
		break;	
	}
	

	
	for(i = 0 ; i < 8 ; i++){
		newArr[n]=numArr[i] ;
		n++ ;
		if(n == 8){
			n = 0 ;
		}
	}
	
	printf("\n");
	printf("After moving all the %d position to right :\n", n);
	for(i = 0 ; i < 8 ; i++){
		printf("%d  ",newArr[i]) ;
	}
	
	
	
	return 0 ;
}
