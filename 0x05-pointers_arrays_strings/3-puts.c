#include "main.h"

/**
* _puts - prints string
* @str: string
* Return: void
*/

void _puts(char *str)
{
int idx = 0;

while (str[idx] != '\0')
{
_putchar(str[idx]);
idx++;
}

_putchar('\n');
}
