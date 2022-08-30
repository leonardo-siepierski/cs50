#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number1;
    int number2;

    do
    {
        number1 = get_int("Start size: ");
    }
    while (number1 < 9);

    do
    {
        number2 = get_int("End size: ");
    }
    while (number2 < number1);

    int result = number1;
    int counter = 0;

    if (number1 == number2) {
        printf("Years: %i\n", counter);
        return 0;
    }
    else
    {
        do
        {
            result += (result / 3) - (result / 4);
            counter++;
        }
        while (result < number2);
    }

    printf("Years: %i\n", counter);

    return 0;
}