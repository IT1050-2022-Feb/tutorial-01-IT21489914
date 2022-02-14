/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2; //Variable declaration
  float avg;

  printf("Enter Mark1 : ");//Enter Mark1
  scanf("%d", &mark1);//Reads Mark1
  printf("Enter Mark2 : ");//Enter Mark2
  scanf("%d", &mark2);//Reads Mark2

  avg = (mark1 + mark2) / 2.0;//Calculates average
  printf("Average : %.2f",avg);//Displays average

  return 0;
}//End of the program

