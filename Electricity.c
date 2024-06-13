// Electricity bill
# include <stdio.h>
int main() {
    int customerID, Unitconsumed;
    char customerName;
    float chargeperunit, totalbill, surcharge = 0;
    printf("Enter the Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter CoustomerName:");
    scanf("%s", customerName);
    
    printf("Enter Unit Consumed:");
    scanf("%d", &Unitconsumed);
    
    if (Unitconsumed <= 199) {
        chargeperunit = 1.20;
    } else if (Unitconsumed < 400) {
        chargeperunit = 1.50;
    } else if (Unitconsumed <600) {
        chargeperunit = 1.80;
    } else {
        chargeperunit = 2.00;
    }
    
    totalbill = Unitconsumed * chargeperunit;
    
    if (totalbill > 400) {
        surcharge = totalbill * 0.15;
        totalbill += surcharge;
    }
    
    if (totalbill < 400) {
        totalbill = 100;
    }
    
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %d\n", Unitconsumed);
    printf("Total Bill: Ksh %.2f\n", totalbill);
    
    
    return 0;
    