#include<stdio.h> //scan(), printf()

int a=10; //global variable
int main (){
  //int a = 11; //local variable
  printf("The value of a is %d \n",a);
  area();
  return 0;
}

int area(){
  //int a = 12;
  printf("The value of a is %d \n",a);
}