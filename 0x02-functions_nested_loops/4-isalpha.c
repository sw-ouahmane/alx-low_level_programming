#include "main.h"

/**
 * _isalpha - Checks if a character is a letter, lowercase, or uppercase
 *
 * @c: The character to be checked
 *
 * Description: This function checks if the input character 'c' is a letter,
 * whether it's lowercase or uppercase. It returns 1 if 'c' is a letter and 0
 * otherwise.
 *
 * Return: 1 if 'c' is a letter (lowercase or uppercase), 0 otherwise
 */

int _isalpha(int c);
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
