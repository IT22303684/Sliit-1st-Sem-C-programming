//quiz 6
//Code by Dasun Tharuka

#include <stdio.h>

int main()
{
	int rate[5] = {0} ;
	int num , i ;
	
	while(1){
		printf("Pls input the service rating (1-5) :");
		scanf("%d", &num) ;
		
		if(num == -1){
			break ;
		}
		
		if(num < 1 || num > 5){
			printf("Invalid rate \n");
			continue ;
		}
		if(num == 1){
			rate[0]++ ;
		}else if(num == 2){
			rate[1]++ ;
		}else if(num == 3){
			rate[2]++;
		}else if(num == 4){
			rate[3]++ ;
		}else if(num == 5){
			rate[4]++;
		}
		
		 
	}
	printf("\nRating    Number of response\n");
	for(i = 0; i < 5 ; i++){
		printf("%d              %d\n", i+1 , rate[i]);
	}
	
	return 0;
}
