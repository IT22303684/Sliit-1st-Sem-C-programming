#include <stdio.h>
//code by Dasun Tharuka

int main()
{
	int num , flag , i ;
	int numArr[4] ;
	while(1){
		printf("Enter a four digit number :");
		scanf("%d", &num) ;
	
		if(num < 1000 || num > 9999){
			printf("Invalid number \n");
		  	continue ;
		}
		
		break ;
	}
	
	numArr[0] = num/1000 ;
	num = num % 1000 ;
	numArr[1] = num/100 ;
	num = num % 100 ;
	numArr[2] = num/10 ;
    numArr[3] = num % 10 ;
    
    //printf("\n\n%d %d %d %d", numArr[0], numArr[1], numArr[2] , numArr[3] );
    
	for(i = 0 ; i < 2 ; i++){
		if(numArr[i] == numArr[4-i-1]){
			flag = 0;
		}else {
			flag =1 ;
			printf("It is not a palindrome\n");
			return 0;
		}
		
	}
	
	if(flag == 0){
		printf("It is a palindrome\n");
	}
	

	
	
	return 0;
}
