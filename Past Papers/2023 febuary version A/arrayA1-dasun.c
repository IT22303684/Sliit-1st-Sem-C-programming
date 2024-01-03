#include <stdio.h>
#include <string.h>

//2023 - february 2023
//question - part 2 -dt
//Code by Dasun Tharuka

int main()
{
	char strings[20] ;
	int i , j= 1 , len ;
	char temp , temp2 ;
	
	printf("Enter the word :");
	scanf("%s", strings) ;
	
	
	len = strlen(strings) ;
	
	for(i = 0 ; i < len /2 ; i++){
		
		temp = strings[i] ;
		strings[i] = strings[len -1 - i] ;
		strings[len -1 - i] = temp ;
	}
	
	
	printf("Resversd array : %s", strings) ;
	
	
	
	return 0;
}
