#include <stdio.h>
//question 4 - dasun Tharuka

float calculateIncrement(int grade , float basicSalary);
float calcTotSalary(float salary, float increment);

int main()
{
	
	int grade ;
	float salary ;
	
	printf("Enter the basic salary :");
	scanf("%f", &salary) ;
	
	printf("Enter the Grade :");
	scanf("%d", &grade) ;
	
	if(grade < 1 || grade > 3){
		printf("Invalid grade !\n") ;
		return -1 ;
	}
	
	printf("\nIncrement : %.2f\n", calculateIncrement(grade,salary));
	printf("Total salary : %.2f\n", calcTotSalary(salary,calculateIncrement(grade,salary)) );
	
	
	return 0;
}

float calculateIncrement(int grade , float basicSalary)
{
	switch(grade){
		case 1:
			return basicSalary * 10.00/100.00 ;
			break ;
		case 2:
			return basicSalary * 15.00/100.00 ;
			break ;
		case 3:
			return basicSalary * 20.00/100.00 ;
			break ;
		default :
			return -1 ;
			break ;		
	}
}

float calcTotSalary(float salary, float increment)
{
	return salary + increment ;
}
