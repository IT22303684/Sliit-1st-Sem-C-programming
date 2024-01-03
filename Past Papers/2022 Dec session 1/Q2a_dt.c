#include <stdio.h>
//2022 - q2 - dt
//dasun

int main()
{
	int numArr[8] ;
	int temp , temp2 ;
	int i ;
	
	for(i = 0 ; i < 8 ; i++){
		printf("Enter the number %d :", i+1);
		scanf("%d", &numArr[i]);
	}
	
	printf("\n");
	printf("Array elements are :\n");
	for(i = 0 ; i < 8 ; i++){
		printf("%d  ",numArr[i]) ;
	}
	
	temp = numArr[6] ;  //5 2 8 1 6 2 4 7 
						//4 7 5 2 8 1 6 2
	temp2 = numArr[7] ;
	
	for(i = 7 ; i > 1 ; i--){
		numArr[i] = numArr[i-2] ;
	}
	
	numArr[0] = temp ;
	numArr[1] = temp2 ;
	
	printf("\n");
	printf("after mooving 2 position to right  :\n");
	for(i = 0 ; i < 8 ; i++){
		printf("%d  ",numArr[i]) ;
	}
	
	
	
	return 0 ;
}
