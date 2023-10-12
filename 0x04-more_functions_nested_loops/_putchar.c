#include "main.h"
#include "unistd.h"

/**
 * _putchar - write the character c to stdout
 * @C: The character to print 
 *
 * Return: On Success 1
 * On error, -1 is returned and error is set approperatly
 */


int _putchar(char c)
{
	return(write(1, &c, 1));
}
