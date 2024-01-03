#include <stdio.h>

//code by Dasun Tharuka

int main()
{
	int Smatrix[4][4] ;
	
	int i , j ;
	int flag = -1 ;
	
	for(i = 0 ; i < 4 ; i++){
		printf("Values for row %d\n", i+1) ;
		for(j = 0 ; j < 4 ; j++){
			printf("    Enter elements %d :", j+1);
			scanf("%d", &Smatrix[i][j]) ;
		}
		printf("\n\n");
	}
	
	for(i = 0 ; i < 4 ; i++){
		for(j = 0 ; j < 4 ; j++){
			if(i == j){	
			}else{
				if(Smatrix[i][j] == Smatrix[j][i]){
					flag = 0 ;
				}else{
					flag = 1 ;
					printf("It is not a symmetric Matrix\n");
					return 0 ;
				}
			}
			
		}
	}
	
	if(flag == 0){
		printf("It is a Symmetric matrix\n\n");
	}
	
	
	return 0;
}
