#include<stdio.h>
#include<stdlib.h>


int main() 
{
  int cents;
  while (scanf("%d", &cents) != 1 || cents < 0) 
  {
      printf("Invalid input. Please enter a non-negative integer: ");
      // Clear the input buffer
      while (getchar() != '\n');
  }

  int quarter;
  int nickel;
  int dime;
  int total;
  while(cents > 25) {
    cents = cents - 25;
    quarter = quarter + 1;
  }
}