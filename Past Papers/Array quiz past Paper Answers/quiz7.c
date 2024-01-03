#include <stdio.h>
//Code by Dasun Tharuka

int main()
{
	int seat[10] = {0} ;
	int index , seatNum;
	
	while(1){
		printf("Pls input the seat number(1-10) :");
		scanf("%d", &seatNum) ;
		
		if(seatNum == -1){
			break ;
		}else {
			index = seatNum - 1 ;
		}
		
		if(seatNum < 1 || seatNum > 10){
			printf("Sorry.Please input a valid seat number.\n");
			continue ;
		}
		
		if(seat[index] == 0){
			seat[index] = 1 ;
		}else {
			printf("Sorry. The seat %d is reseved\n", seatNum);
		}
		
		
		
	}
	
	
	return 0;
}
