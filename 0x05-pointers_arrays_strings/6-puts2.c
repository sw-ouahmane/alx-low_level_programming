#include "main.h"

/**
* puts2 - print alternating chars of string
* @str: string
* Return: void
*/

void puts2(char *str)
{
int index;

index = 0;
while (str[index] != '\0')
{
if (index % 2 == 0)
_putchar(str[index]);
index++;
}
_putchar('\n');
}

