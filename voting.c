//voting
#include <stdio.h>

int main() {
    int age;
    char citizen;
  
    printf("Please enter age:");
    scanf("%d", &age);
  
    printf("are you a kenyan citizen (y/n): ");
    scanf(" %c", &citizen);
    
    if (age > 18 && citizen  == 'y'){
        printf("Eligible to vote ");
    }
    
    else{
        printf("can't vote");
    }
  
    return 0;
}
