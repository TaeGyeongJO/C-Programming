// Library System
#include<stdio.h>
int main () {
    int book_id, due_date, return_date, days_overdue, fine;
    printf("Enter the BoodID: ");
    scanf("%d",&book_id);
    
    printf("Etner the return date: ");
    scanf("%d", &return_date);
    
    printf("Enter the due date: ");
    scanf("%d", &due_date);
    
    days_overdue = return_date - due_date;
    
    if (days_overdue >= 1 && days_overdue <=7) {
        fine = days_overdue *20;
    }
    
    else if (days_overdue >= 8 && days_overdue <=14) {
        fine = days_overdue *50;
    }
    
    else if (days_overdue >= 15){
        fine = days_overdue *100;
    }
    
    printf("The days over due is/are %d \n", days_overdue);
    printf("The fine is Ksh %d ", fine);
    
    return 0;
}