#include <stdio.h>
//arrayB2 -dt

//Code by Dasun Tharuka

int main()
{
	float salesArr[2][3] ;
	float highAmount[2] = {0} ;
	int i , j ;
	
	for(i = 0 ; i < 2 ; i++){
		printf("Enter the sales amount of sales person %d\n", i+1) ;
		for(j = 0 ; j < 3 ; j++){
			printf("   Product %d :", j+1);
			scanf("%f", &salesArr[i][j]);	
		}
		printf("\n") ;
	}
	
	printf("The sales ampount of 2 sales person for 3 products\n");
	for(i = 0 ; i < 2 ; i++){
		for(j = 0 ; j < 3 ; j++){
			printf("%.2f    ", salesArr[i][j]) ;
			highAmount[i] = highAmount[i] + salesArr[i][j] ;
		}
		printf("\n");
	}
	
	if(highAmount[0] > highAmount[1]){
		printf("\n\nThe sales person with the highest sales amount is sales person 0\n");
	}else {
		printf("\n\nThe sales person with the highest sales amount is sales person 1\n");
	}
	
	return 0;
}
