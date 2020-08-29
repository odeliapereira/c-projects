/*
   Author: Brian Pereira and Odelia Pereira
   Date: 26th August, 2020
   Purpose: To learn C programming and use GitHub
*/

#include <stdio.h>
#include "o_mathlib.h"

void main()
{
  int x=0, y=0, sum=0;
  printf("Program to add two numbers.");
  printf("\n");
  printf("Enter a number: ");
  scanf("%d",&x);
  printf("\n");
  printf("Enter a number: ");
  scanf("%d",&y);

  sum = add(x,y);
  printf("\n");
  printf("The sum = %d",sum);
}
