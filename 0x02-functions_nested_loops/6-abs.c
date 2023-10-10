#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The integer to find the absolute value of
 *
 * Description: This function computes and returns the absolute value of the
 * input integer 'n'. If 'n' is negative, its negation is returned.
 *
 * Return: The absolute value of the integer 'n'
 */
int _abs(int n)
{
if (n < 0)
{
int abs_val = n * -1;  /* Calculate the absolute value */
return (abs_val);
}
return (n);
}
