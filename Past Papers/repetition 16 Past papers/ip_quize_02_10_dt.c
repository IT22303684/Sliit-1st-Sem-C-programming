#include <stdio.h>
//Code by Dasun Tharuka
int main()
{
	int i , j ;
	int mark , sum , students;
	
	printf("How many students are in the module :");
	scanf("%d", &students);
	
	for(i=1 ; i <= students ; i++){
		sum = 0 ;
		
		printf("Enter the marks of student %d (between 0-10) \n", i);
		for(j=1 ; j <= 3 ; j++){
			
			printf("   mark %d :", j);
			scanf("%d", &mark);
			
			if(mark < 0 || mark > 10 ){
				printf("Invalid mark ..!\n");
				j-- ;
				continue ;
			}
			
			sum = sum + mark ;
		}
		printf("Total marks :%d\n\n", sum);
	}
	
	return 0;
}
