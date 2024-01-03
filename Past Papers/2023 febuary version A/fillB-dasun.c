#include <stdio.h>

//Code by Dasun Tharuka
int main()
{
	int noofPizza ;
	char type , size ;
	int num;
	
	while(1){
		printf("Enter the type of pizza(V/C/S) :");
		scanf(" %c", &type) ;
		
		if (type == '-') {
            scanf("%d", &num);
           if (num  == 99){
            	break;
		   }
			
        }
		
	
		printf("Enter the size :");
		scanf(" %c", &size) ;
	
		printf("Enter no of pizza :");
		scanf("%d", &noofPizza) ;
		
		
	}
	
	
	
	return 0;
}
