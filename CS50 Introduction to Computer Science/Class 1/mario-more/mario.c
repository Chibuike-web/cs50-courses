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

    for (int i = 0; i < height; i++)
    {
      // Print spaces for left pyramid alignment
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

      // Print left pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
            
        }
        
        // Print gap between pyramids
        printf("  ");

        // Print right pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
            
        }

        // Move to the next line
        printf("\n");
    }

    

    return 0;
}
