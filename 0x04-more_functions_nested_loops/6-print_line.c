#include "main.h"

/**
 * print_line - Prints a line of '_' characters
 * @n: Number of times the character '_' should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}

_putchar('\n');
}
}
