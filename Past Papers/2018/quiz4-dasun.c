#include <stdio.h>

//Code by Dasun Tharuka

int main()
{
	int i , j , attendance , count = 0;
	char number[20] , name[20] ;
	int attend[7] ;
	
	FILE *fptr ;
	
	fptr = fopen("attendance.txt", "w") ;
	
	if(fptr == NULL){
		printf("File cannot be created !\n");
		return -1 ;
	}
	
	for(i = 0 ; i < 2 ; i++){
		printf("Employee %d \n", i+1) ;
		printf("   Enter the Employee number :");
		scanf("%s", number) ;
		printf("   Enter the Employee Name :");
		scanf("%s", name) ;
		
		fprintf(fptr, "%s   %s   ", number , name) ;
		
		for(j = 0 ; j < 7 ; ){
			printf("Enter the day %d attendance (0/1 only) :", j+1);
			scanf("%d", &attendance) ;
			
			if(attendance != 0 && attendance != 1){
				printf("Invalid input !\n");
			}else {
				fprintf(fptr, "%d ", attendance);
				j++ ;
			}
		}
		fprintf(fptr,"\n") ;
	}
	
	fclose(fptr) ;
	
	fptr = fopen("attendance.txt", "r") ;
	
	if(fptr == NULL){
		printf("File cannot be opened!\n");
		return -1 ;
	}

	fscanf(fptr, "%s  %s  %d %d %d %d %d %d %d", number , name , &attend[0] ,&attend[1] ,&attend[2] ,&attend[3],&attend[4] ,&attend[5] ,&attend[6],&attend[7]) ;
	
	j= 1 ;
	printf("\n---------------------------------------------\n") ;
	
	while(!feof(fptr)){
		for(i = 0 ; i < 7 ; i++){
			if(attend[i] == 1){
				count++ ;
			}
		}
		printf("Total number of days %d imployee reported to work : %d\n", j , count);
		j++ ;
		count = 0;
		fscanf(fptr, "%s  %s  %d %d %d %d %d %d %d", number , name , &attend[0] ,&attend[1] ,&attend[2] ,&attend[3],&attend[4] ,&attend[5] ,&attend[6],&attend[7]) ;
	}
	
	fclose(fptr) ;
	
	
	return 0;
}
