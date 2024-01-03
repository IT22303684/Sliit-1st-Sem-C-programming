#include <stdio.h>
//Code by Dasun Tharuka

int main()
{
	int i , j , k , num ;
	while(1){
		printf("Enter Number :");
		scanf("%d" , &num) ;
	
		if(num < 1){
			printf("Invalid Number.");
			continue ;
		}
		
		for(i=1 ; i <= num ; i++ ){
			for(j=1 ; j <= i ; j++){
				for(k=1 ; k <= i ; k++){
					printf("%d ", i);
				}
				printf("\n");
			}
			printf("\n");
		}
		
		
	}
	
	
	
	return 0;
}
