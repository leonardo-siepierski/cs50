#include <stdio.h>
#include <math.h>
#include <cs50.h>

int loop(int value)
{
    int counter = 0;
    int control = value;

    while (control > 0)
    {
        if (control >= 25)
        {
            control -= 25;
            counter++;
        }
        else if (control >= 10 && control < 25)
        {
            control -= 10;
            counter++;
        }
        else if (control >= 5 && control < 10)
        {
            control -= 5;
            counter++;
        }
        else if (control < 5)
        {
            control -= 1;
            counter++;
        }
    }

    return printf("%i\n", counter);
}

int main(void)
{
    float number = 0;

    do
    {
        number = get_float("Valor: ");
    }
    while (number <= 0);

    int convertedNumber = round(number * 100);

    loop(convertedNumber);

    return 0;
}