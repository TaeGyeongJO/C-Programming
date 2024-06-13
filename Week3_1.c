 # include<stdio.h> //scan(), printf()
int main (){
  int mango = 100; //%d
  float deposit = 5000.23; //%f
  double total_cost = 3000000.12; //%lf
  char m = 'c'; //%c
  
  printf("The value of mango is %d \n", mango);
  printf("The value of deposit is %.2f \n", deposit);
  printf("The value of total_cost is %.2lf \n", total_cost);
  printf("The value of m is %c \n", m);
  
  return 0;
}