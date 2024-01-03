#include <stdio.h>

int main()
{
	int stdmarks[5][4] ;
	char studentId[5][20] ;
	
	int correct[5] = {0} ;
	
	int i , j ;
	
	for(i = 0 ; i < 5 ; i++){
		
		printf("Enter the studen Id %d :", i+1);
		scanf("%s", &studentId[i]) ;
		
		for(j = 0 ; j < 4 ; j++){
			printf("  Question %d :", j+1);
			scanf("%d", &stdmarks[i][j]) ;
		}
		
		printf("\n");
	}
	
	FILE *answer ;
	
	answer = fopen("answer.txt","w") ;
	
	for(i = 0 ; i < 5 ; i++){
		
		fprintf(answer,"%s  ",studentId[i]) ;
		for(j = 0 ; j < 4 ; j++){
			fprintf(answer, "%d  ",stdmarks[i][j] );
		}
		fprintf(answer,"\n") ;
	}
	
	for(i = 0 ; i < 5; i++){
		for(j = 0 ; j < 4 ; j++){
			if(j == 0){
				if(stdmarks[i][j] == 1){
					correct[i]++ ;
				}
			}else if(j == 1){
				if(stdmarks[i][j] == 4){
					correct[i]++ ;
				}
				
			}else if(j == 2){
				if(stdmarks[i][j] == 2){
					correct[i]++ ;
				}
				
			}else if(j == 3){
				if(stdmarks[i][j] == 3){
					correct[i]++ ;
				}
					
			}
		}
	}
	
	fprintf(answer,"\n\n") ;
	fprintf(answer,"IT NUmber   Correct answers\n") ;
	for(i = 0 ; i < 5 ; i++){
		
		fprintf(answer,"%s  ",studentId[i]) ;
		fprintf(answer, "       %d",correct[i] );
		
		fprintf(answer,"\n") ;
	}
	
  //	answer = fclose("answer.txt") ;
	
	
	
	
	
	return 0;
}
