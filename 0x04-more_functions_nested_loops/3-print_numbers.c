#include "main.h"
/**
 * print_numbers - Prints numbers 0 to 9, followed by a new line
 *
 * Description: This function prints the numbers from 0 to 9 in order,
 * each followed by a new line character, using the _putchar function.
 * You can only use _putchar twice in your code.
 */
void print_numbers(void)
{
char c;

for (c = '0' ; c <= '9' ; c++)
{
_putchar(c);

}

_putchar('\n');
}
