#include "main.h"
/**
 * print_sign - Prints the sign of a number and returns the sign value
 *
 * @n: The number to be checked
 *
 * Description: This function checks the value of the input number 'n' and
 * prints the corresponding sign (+, 0, or -). It also returns the sign value.
 *
 * Return: 1 and prints '+' if 'n' is greater than zero,
 *         0 and prints '0' if 'n' is zero,
 *        -1 and prints '-' if 'n' is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43); /* '+' */
return (1);
}
else if (n < 0)
{
_putchar(45); /* '-' */
return (-1);
}
else
{
_putchar(48); /* '0' */
return (0);
}
}
