#include<stdio.h>
#include<stdlib.h>


int main() 
{
  int cents;

  printf("Change owed: ");

  while (scanf("%d", &cents) != 1 || cents < 0) 
  {
      printf("Invalid input. Please enter a non-negative integer: ");
      while (getchar() != '\n');
  }

  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;
  int total;
  
  while(cents >= 25) {
    cents-=25;
    quarters++;

  }
  
  while(cents >= 10) {
    cents-=10;
    dimes++;
  } 
  
  while(cents >= 5) {
    cents-=5;
    nickels++;
  }
  
  while(cents >= 1  ) {
    cents-=1;
    pennies++;
  }

  total  = quarters + dimes + nickels + pennies;
  printf("Total: %d\n", total);
}