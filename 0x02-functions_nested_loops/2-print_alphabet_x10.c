#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Description: This function prints the lowercase alphabet
 * 10 times in sequential order followed by a new line.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
		for (c = 'a' ; c <= 'z'; c++)
		{
			_putchar;
			_putchar('\n');
			i++;
		}
}

