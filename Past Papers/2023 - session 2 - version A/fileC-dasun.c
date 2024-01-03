#include <stdio.h>

//code by Dasun Tharuka

int main()
{
	char movie_name[5] ;
	char ticket_typ[5] ;
	int no_of_tickets[5] ;
	int i ;
	
	int h_balcony = 0 , f_balcony = 0 , s_balcony = 0 ;
	int h_normal = 0 , f_normal = 0 , s_normal = 0 ;
	
	char movie ,ticket_type ;
	int no_of_ticket ;
	
	for(i = 0 ; i < 5 ; i++){
		printf("Customer %d \n", i+1);
		printf("   Enter the Movie (H/F/S) :");
		scanf(" %c", &movie_name[i]) ;
	
		printf("   Enter the ticket type (B-balcony , N - normal) :");
		scanf(" %c", &ticket_typ[i]) ;
	
		printf("   Enter the number of tickets :");
		scanf("%d", &no_of_tickets[i]) ;
		
		printf("\n") ;
	}
	
	FILE *cFPtr ;
	
	cFPtr = fopen("ticket.dat", "w") ;
	
 	if(cFPtr == NULL){
		printf("failed to open the file !!\n");
		return -1 ;
	}
	
	for(i = 0 ; i < 5 ; i++){
		fprintf(cFPtr,"%c       %c       %d\n", movie_name[i] , ticket_typ[i] , no_of_tickets[i] );
	}
	
	fclose(cFPtr) ;
	
	cFPtr = fopen("ticket.dat", "r") ;
	
	fscanf(cFPtr, " %c  %c   %d", &movie, &ticket_type , &no_of_ticket) ;
	
	while(!feof(cFPtr))
	{
		if(movie == 'H'){
			if(ticket_type == 'B'){
				h_balcony += no_of_ticket ;
			}else if(ticket_type == 'N'){
				h_normal += no_of_ticket ;
			}
		}else if(movie == 'F'){
			if(ticket_type == 'B'){
				f_balcony += no_of_ticket ;
			}else if(ticket_type == 'N'){
				f_normal += no_of_ticket ;
			}
		}else if(movie == 'S'){
			if(ticket_type == 'B'){
				s_balcony += no_of_ticket ;
			}else if(ticket_type == 'N'){
				s_normal += no_of_ticket ;
			}
		}
		
		fscanf(cFPtr, " %c  %c   %d", &movie, &ticket_type , &no_of_ticket) ;
	}
	
	fclose(cFPtr) ;
	
	printf("\n\nHarry Potter\n");
	printf("   Balcony : %d\n", h_balcony);
	printf("   Normal : %d\n", h_normal);
	
	printf("\nFrozon-2\n");
	printf("   Balcony : %d\n", f_balcony);
	printf("   Normal : %d\n", f_normal);
	
	
	printf("\nSherlock homes\n");
	printf("   Balcony : %d\n", s_balcony);
	printf("   Normal : %d\n", s_normal);
	
	
	return 0;
}
