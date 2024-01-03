//array quiz 5
//Code by Dasun Tharuka
#include <stdio.h>

int main()
{
	int arrNum[6] ;
	int i ;
	int temp , flag = 0;
	
	
	for(i= 0 ; i < 6 ; i++){
		printf("Enter a number %d :", i+1);
		scanf("%d", &arrNum[i]);
		
	}
	
	printf("\nThe values are stored :\n");
	for(i= 0 ; i < 6 ;i++){
		printf("%d \n", arrNum[i] );
		
	}
	
	for(i = 1 ; i < 6 ; i++){
		
		if(arrNum[i] > arrNum[i-1]){
				temp = arrNum[i] ;
				flag = 1 ;
		}else {
			flag = 0;
			break ;
		}
		
	}
	
	if(flag == 1){
		printf("\nNumbers are stored in ascending order.\n");
	}else {
		printf("\nNumbers are not stored in ascending order.\n");
	}
	
	
	return 0;
}
