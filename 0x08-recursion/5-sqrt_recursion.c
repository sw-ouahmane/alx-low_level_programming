#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrtt - _sqrt_reccursion
 * @n: integer paramtrr
 * @i: integer parameterr
 * Return: sqrtt
 */
int _sqrt(int n, int i)
{
if (n < 0)
return (-1);
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
