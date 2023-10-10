#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet
 * in sequential order followed by a newline character.
 *
 * Return: This function does not return a value (void).
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
