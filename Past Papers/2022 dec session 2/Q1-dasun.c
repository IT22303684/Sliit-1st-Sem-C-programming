#include <stdio.h>
//2022 dec -session 2 quiz 1-dt
//code by Dasun Tharuka

int main()
{
	char numArr[4] ;
	
	int i , j , num;
	int flag = 0 ;
	//char num[4] ;
	
	while(1){
		printf("Enter a four digit number :");
		scanf("%d", &num) ;
		
		if(num< 1000 || num > 9999){
			printf("Invalid number\n");
			continue;
		}
		
		numArr[0] = num / 1000;
		num = num % 1000 ;
		numArr[1] = num / 100;
		num = num % 100 ;
		numArr[2] = num / 10;
		num = num % 10 ;
		numArr[3] = num / 1;
		
		break ;
	}
	
	j = 3 ;
	for(i = 0 ; i < 2 ; i++){
		if(numArr[i] == numArr[j]){
			flag = 1 ;
		}else {
			flag = 0 ;
			break ;
		}
		j-- ;
	}
	
	if(flag == 1){
		printf("It is a palindrome\n");
	}else {
		printf("It is not a palindrome\n");
	}
	
	
	return 0;
}
