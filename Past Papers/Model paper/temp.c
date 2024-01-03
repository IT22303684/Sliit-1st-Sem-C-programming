#include <stdio.h>
//dasun
//model paper quiz 3

int main()
{
	int i ;
	char number[20]  ;
	float chargesL , chargesI , chargesR ;

	
	FILE *fptr ;
	
	fptr = fopen("chargers.txt", "w") ;
	
	if(fptr == NULL){
		printf("File cannot be created !\n");
		return -1 ;
	}
	
	for(i = 0 ; i < 5 ; i++){
		printf("Customer %d\n", i+1);
		
		printf("   Enter the Phone no :");
		scanf("%s", &number) ;
		
		printf("   Enter the local call charges :");
		scanf("%f", &chargesL) ;
		
		printf("   Enter the International call charges :");
		scanf("%f", &chargesI) ;
		
		printf("   Enter the Roaming call charges :");
		scanf("%f", &chargesR) ;
		
		fprintf(fptr, " %s       %.2f       %.2f         %.2f\n", number, chargesL ,chargesI ,chargesR  );
	}
	
	fclose(fptr) ;
	
	fptr = fopen("chargers.txt", "r") ;
	
	if(fptr == NULL){
		printf("File cannot be created !\n");
		return -1 ;
	}
	printf("\n\nPhone number         Total charge\n") ;
	fscanf(fptr," %s       %f       %f         %f", number, &chargesL , &chargesI , &chargesR  ) ;
	
	while(!feof(fptr)){
		printf("%s                 %.2f\n", number, chargesL+chargesI+chargesR);
		
		fscanf(fptr," %s       %f       %f         %f", number, &chargesL , &chargesI , &chargesR  ) ;
	}
	
	fclose(fptr) ;
	
	
	
	return 0;
}
