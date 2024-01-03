#include <stdio.h>

//dasun tharuka
//question 1 // 2018 
//Code by Dasun Tharuka

int main()
{
	int i = 0 ;
	char type ;
	float regfee[3] ;
	int stdregistered[3] = {0} ;
	
	printf("                  ABC higher education institute\n");
	printf("                  ------------------------------\n");
	printf("Course Type      Course Name                       Registration Fee(Rs)\n");
	printf("    H          Diploma in hospitality Management       1500.00\n");
	printf("    M          Diploma in Marketing                    2000.00\n");
	printf("    F          Diploma in Finance                      2500.00\n\n");
	
	printf("-------------------------------------------------------------------------\n");
	
	while(1){
		printf("Enter the course type (H/M/F) or quite (Q):");
		scanf(" %c", &type) ;
		
		if(type == 'Q'  || type == 'q'){
			break ;
		}
		
	
		if(type != 'H' && type != 'h'  && type != 'M'  && type != 'm'  && type != 'F'  && type != 'f'){
			printf("Invalid course type !.. Try again !\n\n");
		}else {
			i++ ;
			printf("Sucessfully registerd !.. student count - %d\n\n", i);
			printf("----------------------------------------------\n");
			
		}
		
		if(type == 'H' || type == 'h'){
			regfee[0] += 1500.00 ;
			stdregistered[0]++ ;
		}else if(type == 'M' || type == 'm'){
			regfee[1] += 2000.00 ;
			stdregistered[1]++ ;
		}else if(type == 'F' || type == 'f'){
			regfee[2] += 2500.00 ;
			stdregistered[2]++;
		}
		
		if(i == 100 ){
			printf("100 students register completed !..\n");
			break ;
		}
	}
	
	printf("\nCourse type       No of student Registered        Fee erned\n");
	printf("  H                      %d students                Rs  %.2f\n",stdregistered[0] , regfee[0] );
	printf("  M                      %d students                Rs  %.2f\n",stdregistered[1] , regfee[1] );
	printf("  F                      %d students                Rs  %.2f\n",stdregistered[2] , regfee[2] );
		
		

	
	
	return 0 ;
}
