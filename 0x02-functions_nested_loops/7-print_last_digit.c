#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 *
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

    /* Ensure the number is positive or zero */
if (n < 0)
n = -n;

    /* Extract the last digit by taking the remainder when divided by 10 */
last_digit = n % 10;

    /* Print the last digit using _putchar */
_putchar(last_digit + '0');

return (last_digit);
}
