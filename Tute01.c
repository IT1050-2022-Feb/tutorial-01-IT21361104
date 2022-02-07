/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float avg;
  int tot;
  printf("Enter the marks of subject 1 : ");
  scanf("%d", &mark1);
  printf("Enter the marks of subject 2 : "); 
  scanf("%d", &mark2);
  tot = mark1 + mark2;
  avg = tot/2.0;
  printf("The average : %f", avg);
  
  return 0;
}

