#include <stdio.h>

//Code by Dasun Tharuka

int main() {
    char continueProgram = 'y';

    while (continueProgram == 'y' || continueProgram == 'Y') {
        int employeeCategory;
        float bonusAmount;

        printf("Enter the employee category (1, 2, or 3): ");
        scanf("%d", &employeeCategory);

        if (employeeCategory == 1) {
            float basicSalary;
            int performanceMultiplier;

            printf("Enter the basic salary: ");
            scanf("%f", &basicSalary);
            printf("Enter the performance multiplier (1-3): ");
            scanf("%d", &performanceMultiplier);

            bonusAmount = basicSalary * performanceMultiplier;

        } else if (employeeCategory == 2) {
            int numberOfWorkingDays;
            float dailyPayment;

            printf("Enter the number of working days: ");
            scanf("%d", &numberOfWorkingDays);
            printf("Enter the daily payment: ");
            scanf("%f", &dailyPayment);

            if (numberOfWorkingDays > 240) {
                bonusAmount = dailyPayment * 20;
            } else {
                bonusAmount = 0;
            }

        } else if (employeeCategory == 3) {
            bonusAmount = 50000;
        } else {
            printf("Invalid employee category. Please try again.\n");
            continue;
        }

        printf("Bonus amount: %.2f\n", bonusAmount);

        // Check if the user wants to continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueProgram);
    }

    return 0;
}
