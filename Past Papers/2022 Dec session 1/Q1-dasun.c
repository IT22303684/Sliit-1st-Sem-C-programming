#include <stdio.h>
//2022 quiz 1 
//dt

int main()
{
	char character1 , character2 ;
	int no_of_lines , i , j ;
	
	printf("Enter 1St character :");
	scanf("%c", &character1);
	
	printf("Enter 2nd character :");
	scanf(" %c", &character2);
	
	printf("Enter numbre of lines :");
	scanf("%d", &no_of_lines) ;
	
	for(i= 1 ; i <= no_of_lines ; i ++){
		
		for(j = 1; j <= i ; j++){
			
			if(j % 2 == 0){
				printf("%c", character2 );
			}else{
				printf("%c", character1 );
			}
			
		}
		
		printf("\n");
	}
	
	
	return 0;
}
