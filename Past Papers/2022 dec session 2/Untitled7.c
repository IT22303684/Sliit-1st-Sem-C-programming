#include <stdio.h>
#include <assert.h>
#include <math.h>
//code by Dasun Tharuka

float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int vType , float usedFuelQuota , float remainingQuota, float cost);



int main()
{
	int type ;
	float usedfuel ;
	
	assert(fabs(calcRemainingFuel(1,1.5)-3.50) < 0.001) ;
	assert(fabs(calcRemainingFuel(2,10.0)-10.0) < 0.001) ;
	
	while(1){
		printf("Enter the Vehical type (1/2/3/4) :");
		scanf("%d", &type) ;
		
		if(type == -1){
			break ;
		}
		
		if(type < 1 || type > 4){
			printf("Invalid input\n");
			continue ;
		}
	
		printf("Enter the used fuel cost :");
		scanf("%f", &usedfuel) ;
		
		displayDetails(type,usedfuel,calcRemainingFuel(type,usedfuel),calcFuelcost(type,usedfuel)) ;
		
		printf("\n-------------------------------------------------------------------\n");
		
		
	}
	
	
	
	return 0;
}

float calcRemainingFuel (int vehicleType, float usedFuelQuota)
{
	float remaing ;
	
	switch(vehicleType){
		case 1:
			remaing = 5 - usedFuelQuota ;
			break ;
		case 2:
			remaing = 20 - usedFuelQuota ;
			break ;
		case 3:
			remaing = 20 - usedFuelQuota ;
			break ;
		case 4:
			remaing = 30 - usedFuelQuota ;
			break ;
		default :
			remaing = 0;
			break ;				
	}
	return remaing ;
}

float calcFuelcost (int vehicleType, float usedFuelQuota)
{
	float fullCost ;
	
	switch(vehicleType){
		case 1:
			fullCost = usedFuelQuota * 370.00 ;
			break ;
		case 2:
			fullCost = usedFuelQuota * 370.00 ;
			break ;
		case 3:
			fullCost = usedFuelQuota * 510.00 ;
			break ;
		case 4:
			fullCost = usedFuelQuota * 370.00 ;
			break ;
		default :
			break ;
	}
	
	return fullCost ;
}

void displayDetails(int vType , float usedFuelQuota , float remainingQuota, float cost)
{
	printf("\nVehicle type    Quota used    Quota Remaning   Fuel cost\n");
	printf("    %d                %.2f           %.2f      Rs. %.2f", vType ,usedFuelQuota , remainingQuota , cost) ;
	
}
