/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int num,sum = 0,count = 1;//Variable declaration

  printf("Enter the number : ");//Enter number
  scanf("%d", &num);//Reads number

  if(num >= 1)//Checking condition
  {
    while(count <= num)//Checking condition
    {
      sum = sum + count;//Calculates sum
      count++;//Increment

    }
    printf("%d", sum);//Displays sum
  }
  else//Checking condition
    printf("Number < 1");

  return 0;
}//End of the program

