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
last_digit = n % 10;

    /* Ensure the number is positive or zero */
if (last_digit < 0)
{
	last_digit = last_digit * -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
