#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	float avg , total  ;
	char yorn ;
	int score , i  ;
	
	while(1){
		printf("Enter the score of player 1 (between 0-8)\n");
		
		avg = 0.00 ;
		total = 0.00 ;
		
		for(i=1 ; i <= 5 ; i++){
			printf("    Round %d :", i);
			scanf("%d", &score);
			
			total = total + (float)score ;
			
			if(score < 0 || score > 8){
				printf("Invalid score.. Try Again !\n");
				i-- ;
				continue ;
			}
			
		}
		
		avg = total / 5.0 ;
		
		printf("Average score : %.1f\n\n", avg);
		
		printf("Dou you want to enter the score of another player (y/n) :");
		scanf(" %c", &yorn);
		
		if(yorn == 'Y' || yorn =='y'){
			continue ;
		}else if(yorn == 'N' || yorn =='n'){
			break ;
		}else {
			printf("Invalid input\n");
			break ;
		}
	}
	
	
	return 0;
}
