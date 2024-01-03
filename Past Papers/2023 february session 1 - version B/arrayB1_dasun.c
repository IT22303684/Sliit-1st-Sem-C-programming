#include <stdio.h>
#include <string.h>

//code by Dasun Tharuka

int main()
{
	char strArr[15] ;
	char temp ;
	
	int len , i;
	
	printf("Enter the word :");
	scanf("%s", strArr) ;
	
	len = strlen(strArr) ;
	
	//abcde
	//edcba
	
	for(i = 0 ; i < len/2 ; i++){
		temp = strArr[i] ;
		strArr[i] = strArr[len - i -1] ;
		strArr[len - i -1] = temp ;
		
	}
	
	printf("Reversed word :%s", strArr);
	
	
	
	return 0;
}
