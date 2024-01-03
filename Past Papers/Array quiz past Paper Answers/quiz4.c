//array quiz 4
//Code by Dasun Tharuka

#include <stdio.h>

int main()
{
	int num[8] ;
	int i , count = 0 , number ;
	
	for(i= 0 ; i < 8 ; ){
		printf("Enter a number %d (between 1- 4) :", i+1);
		scanf("%d", &number) ;
		
		if(number >= 1 && number <= 4){
			num[i++] = number ;
		}else {
			printf("Invalid number..Re-enter the number again\n");
		}
		
	}
	
	printf("\nNum array :");
	for(i = 0; i < 8 ; i++){
		printf("%d  ", num[i]);
		
		if(num[i] == 1){
			if(num[i+1] == 3){
				count++ ;
			}
		}
	}
	
	printf("\nNumber of times pattern '1 3' appear :%d ", count);
	
	
	return 0;
}
