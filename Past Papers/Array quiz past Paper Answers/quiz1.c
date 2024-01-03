//array quiz 01 
//dasun

#include <stdio.h>

//Code by Dasun Tharuka

int main()
{
	int numArr[6] = {0} ;
	int oddNum[6] = {0} ;
	int evenNum[6] = {0} ;
	int i , oddcount = 0 , evencount = 0;
	
	for(i= 0;i < 6; i++){
		printf("Pls enter a number %d :",i+1);
		scanf("%d", &numArr[i]);
	}
	
	for(i= 0 ; i < 6 ; i++){
		if(numArr[i] % 2 == 0){
			evenNum[evencount++] = numArr[i] ;
			
		}else {
			oddNum[oddcount++] = numArr[i] ;
		}
	}
	
	printf("\nNumber series :");
	for(i= 0 ; i < 6; i++){
		printf("%d   ", numArr[i] );
	}
	
	printf("\nodd Numbers :");
	for(i= 0 ; i < oddcount; i++){
		printf("%d  ", oddNum[i]) ;
	}
	
	printf("\nEven Numbers :");
	for(i = 0 ; i < evencount ; i++){
		printf("%d  ", evenNum[i]) ;
	}
	
	printf("\n");
	return 0;
}
