#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	int total , mark, students , i , j ;
	
	printf("How many students are in the module :");
	scanf("%d", &students);
	
	
	
	for(i=1 ; i <= students ; i++){
		
		total = 0 ;
		
		printf("Enter the marks of student %d (between 0 - 10)\n", i);
		
		for(j=1 ; j <= 3 ; j++){
			printf("   Mark %d :", j);
			scanf("%d", &mark);
			
			if(mark < 0 || mark > 10){
				printf("Invalid mark !\n");
				j-- ;
				continue ;	
			}
			
			total = total + mark ;
		}
		
		printf("Total Mark :%d\n\n", total);
	}
	
	
	return 0;
}
