#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	int num , i , j ;
	
	while(1){
		printf("Enter Number :");
		scanf("%d", &num);
		
		if(num <= 0 ){
			printf("Invalid Number..!\n");
			continue ;
		}
		
		printf("\n\n");
		
		for(i=1 ; i <= num ; i++){
			printf("\t");
			for(j= 1 ; j <= num ; j++){
				printf("* ");
			}
			printf("\n");
		}
		
		break ;
		
	}
	
	
	
	return 0;
}
