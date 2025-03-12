#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int height;
  do
  {
    printf("Height: ");
    scanf("%d", &height);
  }
  while (height < 1 || height > 50);

  for (int i = 0; i < height; i++)
  {

    for (int j = 0; j < height - i - 1; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
      printf("#");
    }
    
    printf("#\n");
  }
}