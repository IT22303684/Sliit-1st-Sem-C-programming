#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	int num , i;
	while(1){
		printf("Enter NUmber :");
		scanf("%d", &num);
		
		if(num <= 0 ){
			printf("Invalid number.\n");
			continue ;
		}
		
		printf("\n\n");
		for(i=1; i <= 12 ; i++){
			printf("%2d * %3d = %2d\n", num , i , num * i);
		}
		
		break ;
	}
	
	
	return 0;
}
