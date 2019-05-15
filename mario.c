#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int height;
    do
    {
        height = get_int ("Height: ");
    }
    while (height < 1 || height > 8);
    
    int tmp = height - 1;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j >= tmp)
            {
                printf ("#");
            }
            else
            {
                printf (" ");
            }
        }
        tmp--;
        printf ("\n");
    }
}
