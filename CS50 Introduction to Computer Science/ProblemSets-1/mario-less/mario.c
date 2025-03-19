#include <stdio.h>

int main(void)
{
  int height;

  do
  {
    printf("Height: ");
        
    if (scanf("%d", &height) != 1)
    {
      height = -1;
      scanf("%*s");
    }
  } while (height < 1 || height > 50); // Keep asking until valid

  // Print the pyramid
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < height - i - 1; j++)
    {
      printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }
    
    printf("\n");
  }

  return 0;
}
