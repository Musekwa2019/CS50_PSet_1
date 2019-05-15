
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Number: ");
    
    long tmp = number;
    int counter = 0;
    int sumProduct = 0;
    int justSum = 0;
    long flag = true;
    int inicialNumber = 0;
    string cardMark = "";
    
    while (flag)
    {
        int remainder = tmp % 10;
        counter++;
        
        if (counter % 2 != 0)
        {
            justSum += remainder;
        }
        else
        {
            remainder *= 2;
            if (remainder >= 10)
            {
                sumProduct += (remainder % 10 + 1);
            }
            else
            {
                sumProduct += remainder;
            }
        }

        if (tmp < 10)
        {
            flag = false;
        }
        if (counter == 15 && (inicialNumber == 34 || inicialNumber == 37) && (justSum + sumProduct) % 10 == 0)
        {
            cardMark = "AMEX\n";
        }
        else if (counter == 16 && (inicialNumber >= 51 && inicialNumber <= 55) && (justSum + sumProduct) % 10 == 0)
        {
            cardMark = "MASTERCARD\n";
        }else if ((counter == 13 || counter == 16) && (tmp == 4) && (justSum + sumProduct) % 10 == 0)
        {
            cardMark = "VISA\n";
        }
        else
        {
            cardMark = "INVALID\n";
        }
        inicialNumber = tmp;
        tmp /= 10;
    }
    
    printf ("%s", cardMark);

}
