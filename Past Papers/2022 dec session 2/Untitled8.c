#include <stdio.h>
#include <string.h>
//code by Dasun Tharuka

int main()
{
	FILE *fptr ;
	int i , telphoneNum ;
	char name[20] , username[20] ;
	
	fptr = fopen("Directory.txt", "w");
	
	if(fptr == NULL){
		printf("Fill cannot be created !\n");
		return -1 ;
	}
	
	for(i = 0 ; i < 5 ; i++){
		printf("People %d :\n", i+1);
		printf("   Enter the name :");
		scanf("%s", name) ;
		printf("   Enter the telephone number :");
		scanf("%d", &telphoneNum) ;
		
		fprintf(fptr, "%s          %d\n", name , telphoneNum);
	}
	
	fclose(fptr) ;
	
	fptr = fopen("Directory.txt", "r") ;
	
	if(fptr == NULL){
		printf("File cannot be opened !\n");
		return -1 ;
	}
	
	fscanf(fptr, "%s    %d", name , &telphoneNum);
	
	printf("\n\n---------------------------------------------------------\n");
	printf("Enter the name :");
	scanf("%s" , &username);
	
	while(!feof(fptr)){
		if(strcmp(username,name) == 0){
			printf("   The phone number is : %d" , telphoneNum);
		}
		
		fscanf(fptr, "%s    %d", name , &telphoneNum);
	}
	
	
	return 0 ;
}
