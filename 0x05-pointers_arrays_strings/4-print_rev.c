
Here's the code with i changed to index:

c
Copy code
#include "main.h"

/**
* print_rev - prints string backwards
* @s: string
* Return: void
*/

void print_rev(char *s)
{
int index = 0;

while (s[index] != '\0')
{
index++;
}
index--;

while (index >= 0)
{
_putchar(s[index]);
index--;
}

_putchar('\n');
}
