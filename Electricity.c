//calculation of amount to pay in tokens
#include <stdio.h>
int main() {
    int customer_id, unit_consumed;
    float total_pay, charges;
    char customer_name[50];
//propts the user to enter data asked
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter customer name: ");
    scanf("%s", customer_name);

    printf("Enter units consumed:");
    scanf("%d", &unit_consumed);
//offers the conditions to be met
    if (unit_consumed <= 199) {
        charges = 1.20;
    } else if (unit_consumed >= 200 && unit_consumed < 400) {
        charges = 1.50;
    } else if (unit_consumed >= 400 && unit_consumed < 600) {
        charges = 1.80;
    } else if (unit_consumed >= 600) {
        charges = 2.00;
    }
    //calculates the payments
     total_pay = unit_consumed * charges;
if(total_pay>400){
    total_pay= total_pay+(0.15*total_pay);
}
 //resulting output 
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", unit_consumed);
    printf("Charges per unit:ksh %.2f\n", charges);
    printf("Total pay: %.2f\n", total_pay);
    return 0;
}