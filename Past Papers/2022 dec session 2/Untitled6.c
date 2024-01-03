#include <stdio.h>
//code by Dasun Tharuka

int main()
{
	int image[4][4] ;
	int i , j ;
	
	for(i = 0 ; i < 4 ; i++){
		printf("Values for row %d\n", i+1) ;
		for(j = 0 ; j < 4 ; j++){
			printf("   Enter element %d:", j+1) ;
			scanf("%d", &image[i][j]) ;
		}
	}
	
	printf("\n\n---------------------------------\n") ;
	for(i = 0 ; i < 4 ; i++){
		for(j = 0 ; j < 4 ; j++){
			printf("%d ", image[i][j]) ;
		}
		printf("\n") ;
	}
	
	printf("\n\n---------------------------------\n") ;
	for(i = 0 ; i < 4 ; i++){
		for(j = 0 ; j < 4 ; j++){
			if(image[i][j] > 55){
				printf("%d ", 1) ;
			}else{
				printf("%d ", 0) ;
			}
		}
		printf("\n") ;
	}
	
	
	
	
	return 0;
}
