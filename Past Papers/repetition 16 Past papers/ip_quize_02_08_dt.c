#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	int mark ,sum ,j ,i ;
	char yorn ;
	i = 0 ;
	
	while(1){
		
		i++ ;
		
		printf("Enter the marks of student %d (between 0 - 10) \n", i);
		
		for(j=1; j <= 3 ; j++){
			printf("   mark %d :", j);
			scanf("%d", &mark);
			
			if(mark < 0 || mark > 10){
				printf("Invalid mark..!\n");
				j-- ;
				continue ;
			}
			
			sum = sum + mark ;
		}
		
		printf("Total marks :%d\n\n", sum) ;
		
		printf("Do you want to enter mark of another student (y/n) :");
		scanf(" %c", &yorn);
		
		if(yorn == 'Y' || yorn == 'y'){
			continue ;
		}else if(yorn == 'N' || yorn == 'n'){
			break;
		}else {
			printf("Invalid input \n\n");
			break ;
		}
	}
	
	
	return 0;
}
