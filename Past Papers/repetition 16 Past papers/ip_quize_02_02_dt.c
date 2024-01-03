#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	float avg ;
	int players , round1 , round2 , i;
	
	printf("How many players are in the race :");
	scanf("%d", &players) ;
	
	for(i=1 ; i <= players ; i++){
		
		avg = 0.00 ;
		round1 = 0.00 ;
		round2 = 0.00 ;
		
		printf("Enter The score of players %d (between 0-7) :\n", i);
		printf("      round 1 :");
		scanf("%d", &round1);
		
		printf("      round 2 :");
		scanf("%d", &round2);
		
		avg = (round1 + round2 ) / 2.00 ;
		
		printf("Average score : %.1f\n\n", avg);
	}
	
	return 0;
}
