#include <stdio.h>
//Code by Dasun Tharuka

int main()
{
	int i , j , score , players , player_no , total , max , winner;
	
	printf("Input number of players :");
	scanf("%d", &players);
	
	for(i=1 ; i <= players ; i++){
		
		total = 0;
		
		printf("\nInput player Number :");
		scanf("%d", &player_no);
		
		for(j=1; j <= 3 ; j++){
			printf("  Input Score %d :", j);
			scanf("%d", &score);
			
			total = total + score ;
		}
		
		printf("Total Score : %d\n\n", total);
		if(i == 1){
			max = total ;
			winner = player_no ;
		}
		if(total > max){
			max = total ;
			winner = player_no ;
		}
	}
	
	printf("\n\nThe winner is player Number : %d\n", winner);
	
	
	return 0;
}
