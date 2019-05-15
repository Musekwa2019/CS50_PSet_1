#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float dollars;
    do
    {
        dollars = get_float("change owed: ");
    }
    while (dollars <= 0.0);
    
    int cents = round(dollars * 100);
    bool flag = false;
    int counter = 0;
    
    while (!flag)
    {
        if (cents >= 25)
        {
            cents -= 25;
            counter++;
        }
        else if (cents < 25 && cents >= 10)
        {
            cents -= 10;
            counter++;
        }
        else if (cents < 10 && cents >= 5)
        {
            cents -= 5;
            counter++;
        }
        else if (cents < 5 && cents >= 1)
        {
            cents -= 1;
            counter++;
        }
        else if (cents <= 0)
        {
            flag = true;
        }
    }
    
    printf ("%d\n", counter);
    
}
