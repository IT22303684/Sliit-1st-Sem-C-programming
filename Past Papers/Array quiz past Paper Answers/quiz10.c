//quiz 10
//Code by Dasun Tharuka
#include <stdio.h>

int main()
{
	double salaries[5] = {-1, -1 , -1, -1, -1} ;
	int i ;
	double num ;
	
	for(i = 0 ; i < 5 ; i++){
		printf("Input the salary of employee %d :", i+1);
		scanf("%lf", &num) ;
		
		if(num < 0){
			printf("Please re-enter the amount\n");
			i-- ;
			continue;
		}else {
			salaries[i] = num ;
		}
	}
	
	for(i = 0 ; i < 5 ; i++){
		if(salaries[i] < 10000){
			salaries[i] = salaries[i] + (salaries[i] * 10.00/100.00) ;
		}
	}
	
	printf("\n\nEmployee number         salary\n");
	for(i = 0 ; i < 5 ; i++){
		printf("%d                      %.2lf\n", i+1 , salaries[i]);
	}
	
	
	
	return 0;
}
