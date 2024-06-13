# include<stdio.h> //scan(), printf()
int main (){
  int mango = 100; //%d
  float deposit = 5000.23; //%f
  double total_cost = 3000000.12; //%lf
  char m = 'c'; //%c
  
  printf("Please enter the values of mango:");
  scanf("%d", &mango);
  
  printf("Enter the value of deposit:");
  scanf("%f", &deposit);
  
  printf("Enter the value of total_cost:");
  scanf("%lf", &total_cost);
  
  printf("Enter the value of character:");
  scanf("%c", &m);
  
  printf("The value of mango is %d \n", mango);
  printf("The value of deposit is %.2f \n", deposit);
  printf("The value of total_cost is %.2lf \n", total_cost);
  printf("The value of m is %c \n", m);
  
  return 0;
}