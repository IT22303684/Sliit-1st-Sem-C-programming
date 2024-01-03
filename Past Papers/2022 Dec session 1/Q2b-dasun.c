#include <stdio.h>

int main()
{
	int identityArr[4][4] ;
	int i , j ;
	int flag = 1 ;
	
	for(i = 0 ; i < 4 ; i++){
		printf("Values for row %d :\n",i+1) ;
		for(j = 0 ; j < 4 ; j++){
			printf("   Enter element %d :", j+1) ;
			scanf("%d", &identityArr[i][j]) ;
		}
	}
	
	for(i = 0 ; i < 4 ; i++){
		for(j = 0 ; j < 4 ; j++){
			if(i == j){
				if(identityArr[i][j] == 1){
		     		flag = 0 ;
			 	}else{
			 		printf("\nIt is not an identity Matrix !\n");
			 		flag = 1 ;
			 		return 0 ;
				 }
			}else{
				if(identityArr[i][j] == 0){
		     		flag = 0 ;
			 	}else{
			 		printf("\nIt is not an identity Matrix !\n");
			 		flag = 1 ;
			 		return 0 ;
				 }
			}
		     
		}
	}
	
	if(flag == 0){
		printf("\nIt is an identity Matrix !\n");
	}
	
	
	return 0;
}
