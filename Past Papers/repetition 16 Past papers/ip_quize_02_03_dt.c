#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	float sum , avg ;
	int round , i ;
	char yorn ;
	
	while(1){
		
		sum = 0.00;
		avg = 0.00 ;
		
		printf("Enter the score of player 1 (between 0 - 4) :\n");
	
		for(i=1 ; i <= 3 ;i++){
			printf("   round %d :", i);
			scanf("%d", &round) ;
			
			if(round < 0 || round > 4 ){
				printf("Invalid score..Try again ! \n");
				i-- ;
				continue ;
			}
		
			sum = sum + (float)round ;	
		}
		
		avg = sum / 3.0 ;
		
		printf("Average Score : %.2f\n\n", avg);
		
		printf("Do you want to enter the score of another player (y/n) :");
		scanf(" %c", &yorn);
		
		if(yorn == 'Y' || yorn == 'y'){
			continue ;
		}else if(yorn == 'N' || yorn == 'n'){
			break ;
		}else {
			printf("Invalid input \n\n");
			break;
		}
		
		
	}
	
	
	
	
	return 0;
}
