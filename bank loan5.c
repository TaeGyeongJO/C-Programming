# include <stdio.h> 
int main() {
  int age, income;
  printf("Please enter age:\n");
  scanf("%d",&age);
  
  printf("Please enter income: \n");
  scanf("%d", &income);
  
  if (age>=21 && income>=21000){
    printf("Congratulations you qualify for a loan");
  }
  else{
    printf("No loan");
  }
}
