#include <stdio.h>

//code by Dasun Tharuka

int main()
{
	char movie , ticket_typ ;
	int i , no_of_tickets ;
	
	int h_balcony = 0 ,f_balcony = 0 , s_balcony = 0 ;
	int h_normal = 0 ,f_normal = 0 , s_normal = 0 ;
	
	FILE *cFPtr ;
	
	cFPtr = fopen("ticket.txt", "w") ;
	
	if(cFPtr == NULL){
		printf("Cant creat the file \n\n");
		return -1 ;
	}
	
	for(i = 0 ; i < 5 ; i++){
		printf("Customer %d :\n", i+1) ;
		printf("   Enter the movie (H/F/S) :");
		scanf(" %c", &movie) ;
	
		printf("   Enter the Ticket type (B/N) :");
		scanf(" %c", &ticket_typ) ;
	
		printf("   Enter the number of tickets :");
		scanf("%d", &no_of_tickets) ;
		
		fprintf(cFPtr, "%c     %c    %d\n", movie, ticket_typ , no_of_tickets ) ;
		
		printf("\n") ;
	}
	
	fclose(cFPtr) ;
	
	printf("\n\nSummary report :\n");
	
	cFPtr = fopen("ticket.txt", "r") ;
	
	fscanf(cFPtr , " %c   %c    %d", &movie , &ticket_typ , &no_of_tickets);
	
	while(!feof(cFPtr)){
		if(movie == 'H'){
			if(ticket_typ == 'B'){
				h_balcony += no_of_tickets ;
			}else if(ticket_typ == 'N'){
				h_normal += no_of_tickets ;
			}
		}else if(movie == 'F'){
			if(ticket_typ == 'B'){
				f_balcony += no_of_tickets ;
			}else if(ticket_typ == 'N'){
				f_normal += no_of_tickets ;
			}
		}else if(movie == 'S'){
			if(ticket_typ == 'B'){
				s_balcony += no_of_tickets ;
			}else if(ticket_typ == 'N'){
				s_normal += no_of_tickets ;
			}
		}
		
		fscanf(cFPtr , " %c   %c    %d", &movie , &ticket_typ , &no_of_tickets);
	}
	
	printf("\nHarry potter\n");
	printf("    balcony : %d\n", h_balcony);
	printf("    Normal : %d\n\n", h_normal );
	
	printf("\nFrozen-2\n");
	printf("    balcony : %d\n", f_balcony);
	printf("    Normal : %d\n\n", f_normal );
	
	printf("\nSherlock homs\n");
	printf("    balcony : %d\n", s_balcony);
	printf("    Normal : %d\n\n", s_normal );
	
	fclose(cFPtr);
	return 0;
}
