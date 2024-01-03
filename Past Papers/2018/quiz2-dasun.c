#include <stdio.h>

//Code by Dasun Tharuka

int main()
{
	char ledbulbs[4][4] ;
	int i , j, redbulb =0;
	char bulb ;
	
	for(i = 0 ; i < 4 ; i++){
		printf("Row %d \n", i+1) ;
		for( j = 0 ; j < 4 ; ){
			printf("   Enter the color of the led bulb (R/G/B) :");
			scanf(" %c", &bulb) ;
			
			if(bulb != 'R' && bulb != 'G' && bulb != 'B'){
				printf("Invalid input \n");
			}else {
				ledbulbs[i][j] = bulb ;
				j++ ;
			}
		}
	}
	
	printf("\n-------------------------------------------\n") ;
	
	for(i = 0 ; i < 4 ; i++){
		printf("\t") ;
		for( j = 0 ; j < 4 ; j++ ){
			printf("%c  ", ledbulbs[i][j]) ;
		}
		printf("\n") ;
	}
	
	printf("\n");
	printf("RED LED POSITION :\n") ;
	for(i = 0 ; i < 4 ; i++){
		for( j = 0 ; j < 4 ; j++ ){
			if(ledbulbs[i][j] == 'R'){
				printf("[%d,%d]  ", i , j) ;
			}
		}
	}
	
	
	
	
	return 0;
}
