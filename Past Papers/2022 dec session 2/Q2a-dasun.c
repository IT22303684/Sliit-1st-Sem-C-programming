#include <stdio.h>
//code by Dasun Tharuka

int main()
{
	int userRating[5] = {0};
	int i , j ;
	int num ;
	
	while(1){
		printf("Enter youre rate (1-5) (exit for -99) :");
		scanf("%d" , &num);
		
		if(num == -99){
			break ;
		}
		
		if(num < 1 || num > 5){
			printf("Invalid rate number\n");
			continue;
		}
		
		if(num == 1){
			userRating[0]++ ;
		}else if(num == 2){
			userRating[1]++ ;
		}else if(num == 3){
			userRating[2]++ ;
		}else if(num == 4){
			userRating[3]++ ;
		}else if(num == 5){
			userRating[4]++ ;
		}
		
	}
	
	printf("\n\nRating as a histogram\n\n");
	for(i = 0 ; i < 5 ; i++){
		printf("%d     ",i+1);
		for(j = 0 ; j < userRating[i] ; j++ ){
			printf("*");
		}
		
		printf("\n");
	}
	
	
	return 0;
}
