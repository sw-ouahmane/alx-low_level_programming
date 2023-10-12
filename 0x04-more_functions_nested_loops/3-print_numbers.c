/**
 * print_numbers - Prints numbers 0 to 9, followed by a new line
 *
 * Description: This function prints the numbers from 0 to 9 in order,
 * each followed by a new line character, using the _putchar function.
 * You can only use _putchar twice in your code.
 */
void print_numbers(void)
{
char number = '0';

while (number <= '9')
{
_putchar(number);
number++;
}

_putchar('\n');
}
